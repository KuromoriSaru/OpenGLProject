#include "FinalProjectQT.h"
#include <cstring>
#include <iostream>
#include <qcolordialog.h>
#include <QSignalMapper>
#include <qcheckbox.h>
#include <qslider.h>
#include <QColorDialog>
#include <qtimer.h>

FinalProjectQT::FinalProjectQT(QWidget* parent) : QMainWindow(parent) {
	ui.setupUi(this);

	//QSignalMapping is here
	buttons[0] = this->ui.lightAmbientButton;
	buttons[1] = this->ui.lightDiffuseButton;
	buttons[2] = this->ui.lightSpecularButton;
	buttons[3] = this->ui.matAmbientButton;
	buttons[4] = this->ui.matDiffuseButton;
	buttons[5] = this->ui.matSpecularButton;

	//Connect the buttons to their respective singals and slots
	for (int i = 0; i < 6; ++i) {
		connect(buttons[i], SIGNAL(clicked()), this, SLOT(changeColor()));
	}

	//Connect checkboxers that function similarly together 
	checkBoxes[0] = this->ui.light0CheckBox;
	checkBoxes[1] = this->ui.light1CheckBox;
	checkBoxes[2] = this->ui.light2CheckBox;

	//Connect all the checkboxes to their singals and slots
	for (int j = 0; j < 3; ++j) {
		connect(checkBoxes[j], SIGNAL(stateChanged(int)), this, SLOT(toggleLight(int)));
	}

	//Connect all the sliders together
	rotSlides[0] = this->ui.camRotXSlider;
	rotSlides[1] = this->ui.camRotYSlider;
	rotSlides[2] = this->ui.camRotZSlider;

	for (int k = 0; k < 3; ++k) {
		connect(rotSlides[k], SIGNAL(valueChanged(int)), this, SLOT(updateCamRotation(int)));
	}

	//Connect the spinboxes
	camBox[0] = this->ui.camPosXspinBox;
	camBox[1] = this->ui.camPosYspinBox;
	camBox[2] = this->ui.camPosZspinBox;
	camBox[3] = this->ui.camLookX;
	camBox[4] = this->ui.camLookY;
	camBox[5] = this->ui.camLookZ;

	for (int a = 0; a < 6; ++a) {
		connect(camBox[a], SIGNAL(valueChanged(int)), this, SLOT(updateCamPosition(int)));
	}

	//Group the spinboxes together 
	lightBox[0] = this->ui.lightPosX;
	lightBox[1] = this->ui.lightPosY;
	lightBox[2] = this->ui.lightPosZ;
	lightBox[3] = this->ui.directionX;
	lightBox[4] = this->ui.directionY;
	lightBox[5] = this->ui.directionZ;
	lightBox[6] = this->ui.lightRotX;
	lightBox[7] = this->ui.lightRotY;
	lightBox[8] = this->ui.lightRotZ;

	for (int b = 0; b < 9; ++b) {
		connect(lightBox[b], SIGNAL(valueChanged(int)), this, SLOT(lightMovement(int)));
	}

	//Group spinboxes to their spotlight values
	spotlight[0] = this->ui.constantSpinBox;
	spotlight[1] = this->ui.linearSpinBox;
	spotlight[2] = this->ui.quadSpinBox;
	spotlight[3] = this->ui.spotCutoff;
	spotlight[4] = this->ui.spotExponent;

	for (int c = 0; c < 5; ++c) {
		connect(spotlight[c], SIGNAL(valueChanged(double)), this, SLOT(spotLightSpecs(double)));
	}

	//Group the radio buttons together
	radio[0] = this->ui.noShaderButton;
	radio[1] = this->ui.normalShaderButton;
	radio[2] = this->ui.perPixelShaderButton;
	radio[3] = this->ui.phongShaderButton;
	radio[4] = this->ui.toonShaderButton;
	radio[5] = this->ui.custom1ShaderButton;
	radio[6] = this->ui.custom2ShaderButton;

	for (int d = 0; d < 7; ++d) {
		connect(radio[d], SIGNAL(clicked(bool)), this, SLOT(shaderType(bool)));
	}

	//Timer (for custom shader 2)
	this->timer = new QTimer(this);
	connect(this->timer, SIGNAL(timeout()), this, SLOT(addTime()));

	//Display all the initialized values here 
	this->ui.camPosXspinBox->setValue(this->ui.viewport->camPosX);
	this->ui.camPosYspinBox->setValue(this->ui.viewport->camPosY);
	this->ui.camPosZspinBox->setValue(this->ui.viewport->camPosZ);
	this->ui.camLookX->setValue(this->ui.viewport->camLookX);
	this->ui.camLookY->setValue(this->ui.viewport->camLookY);
	this->ui.camLookZ->setValue(this->ui.viewport->camLookZ);
	this->ui.shininessSpinBox->setValue(this->ui.viewport->matShininess);

	//Add the light controls and their defaults here 
	this->ui.lightPosX->setValue(this->ui.viewport->light0_posX);
	this->ui.lightPosY->setValue(this->ui.viewport->light0_posY);
	this->ui.lightPosZ->setValue(this->ui.viewport->light0_posZ);
	this->ui.directionX->setValue(this->ui.viewport->dirVec0X);
	this->ui.directionY->setValue(this->ui.viewport->dirVec0Y);
	this->ui.directionZ->setValue(this->ui.viewport->dirVec0Z);
	this->ui.lightRotY->setValue(this->ui.viewport->angle_light0);
	this->ui.constantSpinBox->setValue(this->ui.viewport->constant0);
	this->ui.linearSpinBox->setValue(this->ui.viewport->linear0);
	this->ui.quadSpinBox->setValue(this->ui.viewport->quad0);
	this->ui.spotCutoff->setValue(this->ui.viewport->spotCut0);
	this->ui.spotExponent->setValue(this->ui.viewport->spotExponent0);

}

void FinalProjectQT::addTime() {	//Inc update our time 
	if (this->ui.viewport->shaderType == 6) {
		this->ui.viewport->timer += 1;
		this->ui.viewport->update();
	}
}

void FinalProjectQT::chooseModel(QString modelName) {
	string currText = modelName.toStdString();
	currText = currText + ".3ds";
	char* temp = new char[currText.size() + 1];
	this->ui.viewport->modelName = strcpy(temp, currText.c_str());

	this->ui.viewport->update();
}

void FinalProjectQT::changeTextureDefault(int index) {
	this->ui.viewport->changeMap = index;
	this->ui.viewport->update();
}

void FinalProjectQT::toggleTexture(int checked) {
	if (checked == 2) {
		this->ui.viewport->textureOn = true;
	}
	else if (checked == 0) {
		this->ui.viewport->textureOn = false;
	}
	this->ui.viewport->update();
}

void FinalProjectQT::toggleLight(int checked) {
	QCheckBox* checkbox = (QCheckBox*)sender();
	QString checkboxName = checkbox->objectName();
	string cName = checkboxName.toStdString();

	if (checked == 2) {
		if (cName == "light0CheckBox") {
			this->ui.viewport->light0 = true;
		}
		else if (cName == "light1CheckBox") {
			this->ui.viewport->light1 = true;
		}
		else if (cName == "light2CheckBox") {
			this->ui.viewport->light2 = true;
		}
	}
	else {
		if (cName == "light0CheckBox") {
			this->ui.viewport->light0 = false;
		}
		else if (cName == "light1CheckBox") {
			this->ui.viewport->light1 = false;
		}
		else if (cName == "light2CheckBox") {
			this->ui.viewport->light2 = false;
		}
	}
	this->ui.viewport->update();
}

void FinalProjectQT::shaderType(bool checked) {
	QRadioButton* radButton = (QRadioButton*)sender();
	QString radName = radButton->objectName();
	string rName = radName.toStdString();

	this->timer->stop();
	this->ui.viewport->timer = 0;
	if (checked == true) {
		if (rName == "noShaderButton") {
			this->ui.viewport->shaderType = 0;
		}
		else if (rName == "normalShaderButton") {
			this->ui.viewport->shaderType = 1;
		}
		else if (rName == "perPixelShaderButton") {
			this->ui.viewport->shaderType = 2;
		}
		else if (rName == "phongShaderButton") {
			this->ui.viewport->shaderType = 3;
		}
		else if (rName == "toonShaderButton") {
			this->ui.viewport->shaderType = 4;
		}
		else if (rName == "custom1ShaderButton") {
			this->ui.viewport->shaderType = 5;
		}
		else if (rName == "custom2ShaderButton") {
			this->ui.viewport->shaderType = 6;
			this->timer->setInterval(2000);
			this->timer->start(1000);
		}
	}
	this->ui.viewport->update();
}

void FinalProjectQT::currentLightControl(int index) {
	this->ui.viewport->lightControl = index;
	//When the light control updates, show current values stored in UI 
	//setCurrentIndex for combo boxes
	if (index == 0) {
		this->ui.lightPosX->setValue(this->ui.viewport->light0_posX);
		this->ui.lightPosY->setValue(this->ui.viewport->light0_posY);
		this->ui.lightPosZ->setValue(this->ui.viewport->light0_posZ);
		this->ui.directionX->setValue(this->ui.viewport->dirVec0X);
		this->ui.directionY->setValue(this->ui.viewport->dirVec0Y);
		this->ui.directionZ->setValue(this->ui.viewport->dirVec0Z);
		this->ui.lightRotY->setValue(this->ui.viewport->angle_light0);
		this->ui.constantSpinBox->setValue(this->ui.viewport->constant0);
		this->ui.linearSpinBox->setValue(this->ui.viewport->linear0);
		this->ui.quadSpinBox->setValue(this->ui.viewport->quad0);
		if (this->ui.viewport->pointLight0Val == 1.0) {
			this->ui.lightPropertyComboBox->setCurrentIndex(1); //Point light option
		}
		else {
			this->ui.lightPropertyComboBox->setCurrentIndex(0); //Directional light option
		}
		this->ui.spotCutoff->setValue(this->ui.viewport->spotCut0);
		this->ui.spotExponent->setValue(this->ui.viewport->spotExponent0);
	}
	else if (index == 1) {
		this->ui.lightPosX->setValue(this->ui.viewport->light1_posX);
		this->ui.lightPosY->setValue(this->ui.viewport->light1_posY);
		this->ui.lightPosZ->setValue(this->ui.viewport->light1_posZ);
		this->ui.directionX->setValue(this->ui.viewport->dirVec1X);
		this->ui.directionY->setValue(this->ui.viewport->dirVec1Y);
		this->ui.directionZ->setValue(this->ui.viewport->dirVec1Z);
		this->ui.lightRotY->setValue(this->ui.viewport->angle_light1);
		this->ui.constantSpinBox->setValue(this->ui.viewport->constant1);
		this->ui.linearSpinBox->setValue(this->ui.viewport->linear1);
		this->ui.quadSpinBox->setValue(this->ui.viewport->quad1);
		if (this->ui.viewport->pointLight1Val == 1.0) {
			this->ui.lightPropertyComboBox->setCurrentIndex(1); //Point light option
		}
		else {
			this->ui.lightPropertyComboBox->setCurrentIndex(0); //Directional light option
		}
		this->ui.spotCutoff->setValue(this->ui.viewport->spotCut1);
		this->ui.spotExponent->setValue(this->ui.viewport->spotExponent1);
	}
	else if (index == 2) {
		this->ui.lightPosX->setValue(this->ui.viewport->light2_posX);
		this->ui.lightPosY->setValue(this->ui.viewport->light2_posY);
		this->ui.lightPosZ->setValue(this->ui.viewport->light2_posZ);
		this->ui.directionX->setValue(this->ui.viewport->dirVec2X);
		this->ui.directionY->setValue(this->ui.viewport->dirVec2Y);
		this->ui.directionZ->setValue(this->ui.viewport->dirVec2Z);
		this->ui.lightRotY->setValue(this->ui.viewport->angle_light2);
		this->ui.constantSpinBox->setValue(this->ui.viewport->constant2);
		this->ui.linearSpinBox->setValue(this->ui.viewport->linear2);
		this->ui.quadSpinBox->setValue(this->ui.viewport->quad2);
		if (this->ui.viewport->pointLight2Val == 1.0) {
			this->ui.lightPropertyComboBox->setCurrentIndex(1); //Point light option
		}
		else {
			this->ui.lightPropertyComboBox->setCurrentIndex(0); //Directional light option
		}
		this->ui.spotCutoff->setValue(this->ui.viewport->spotCut2);
		this->ui.spotExponent->setValue(this->ui.viewport->spotExponent2);
	}
	this->ui.viewport->update();
}

void FinalProjectQT::changeColor() {
	QColor color = QColorDialog::getColor(Qt::white, this);

	//Check which object is the sender to save the values in the correct spots, emit sends another signal
	QPushButton* button = (QPushButton*)sender();
	QString buttonName = button->objectName();
	string bName = buttonName.toStdString();

	if (color.isValid()) {

		if (bName == "lightAmbientButton") {
			if (this->ui.viewport->lightControl == 0) {
				this->ui.viewport->light0_amR = color.red() / 255.0f;
				this->ui.viewport->light0_amG = color.green() / 255.0f;
				this->ui.viewport->light0_amB = color.blue() / 255.0f;
			}
			else if (this->ui.viewport->lightControl == 1) {
				this->ui.viewport->light1_amR = color.red() / 255.0f;
				this->ui.viewport->light1_amG = color.green() / 255.0f;
				this->ui.viewport->light1_amB = color.blue() / 255.0f;
			}
			else if (this->ui.viewport->lightControl == 2) {
				this->ui.viewport->light2_amR = color.red() / 255.0f;
				this->ui.viewport->light2_amG = color.green() / 255.0f;
				this->ui.viewport->light2_amB = color.blue() / 255.0f;
			}
		}
		else if (bName == "lightDiffuseButton") {
			if (this->ui.viewport->lightControl == 0) {
				this->ui.viewport->light0_diffR = color.red() / 255.0f;
				this->ui.viewport->light0_diffG = color.green() / 255.0f;
				this->ui.viewport->light0_diffB = color.blue() / 255.0f;
			}
			else if (this->ui.viewport->lightControl == 1) {
				this->ui.viewport->light1_diffR = color.red() / 255.0f;
				this->ui.viewport->light1_diffG = color.green() / 255.0f;
				this->ui.viewport->light1_diffB = color.blue() / 255.0f;
			}
			else if (this->ui.viewport->lightControl == 2) {
				this->ui.viewport->light2_diffR = color.red() / 255.0f;
				this->ui.viewport->light2_diffG = color.green() / 255.0f;
				this->ui.viewport->light2_diffB = color.blue() / 255.0f;
			}
		}
		else if (bName == "lightSpecularButton") {
			if (this->ui.viewport->lightControl == 0) {
				this->ui.viewport->light0_specR = color.red() / 255.0f;
				this->ui.viewport->light0_specG = color.green() / 255.0f;
				this->ui.viewport->light0_specB = color.blue() / 255.0f;
			}
			else if (this->ui.viewport->lightControl == 1) {
				this->ui.viewport->light1_specR = color.red() / 255.0f;
				this->ui.viewport->light1_specG = color.green() / 255.0f;
				this->ui.viewport->light1_specB = color.blue() / 255.0f;
			}
			else if (this->ui.viewport->lightControl == 2) {
				this->ui.viewport->light2_specR = color.red() / 255.0f;
				this->ui.viewport->light2_specG = color.green() / 255.0f;
				this->ui.viewport->light2_specB = color.blue() / 255.0f;
			}
		}
		else if (bName == "matAmbientButton") {
			this->ui.viewport->matAmbR = color.red() / 255.0f;
			this->ui.viewport->matAmbG = color.green() / 255.0f;
			this->ui.viewport->matAmbB = color.blue() / 255.0f;
		}
		else if (bName == "matDiffuseButton") {
			this->ui.viewport->matDiffR = color.red() / 255.0f;
			this->ui.viewport->matDiffG = color.green() / 255.0f;
			this->ui.viewport->matDiffB = color.blue() / 255.0f;
		}
		else if (bName == "matSpecularButton") {
			this->ui.viewport->matSpecR = color.red() / 255.0f;
			this->ui.viewport->matSpecG = color.green() / 255.0f;
			this->ui.viewport->matSpecB = color.blue() / 255.0f;
		}
	}

	this->ui.viewport->update();
}

void FinalProjectQT::changeShininess(double shiny) {
	this->ui.viewport->matShininess = shiny;
	this->ui.viewport->update();
}

void FinalProjectQT::lightProperty(QString light) {
	string l = light.toStdString();

	if (l == "Point") { //When user switches to point light, the cutoff and exponent values will always reset to 180 and 0 respectively
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->pointLight0Val = 1.0;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->pointLight1Val = 1.0;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->pointLight2Val = 1.0;
		}
	}
	else if (l == "Directional") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->pointLight0Val = 0.0;
			this->ui.viewport->spotCut0 = 180;
			this->ui.viewport->spotExponent0 = 0;
			this->ui.spotCutoff->setValue(this->ui.viewport->spotCut0);
			this->ui.spotExponent->setValue(this->ui.viewport->spotExponent0);
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->pointLight1Val = 0.0;
			this->ui.viewport->spotCut1 = 180;
			this->ui.viewport->spotExponent1 = 0;
			this->ui.spotCutoff->setValue(this->ui.viewport->spotCut1);
			this->ui.spotExponent->setValue(this->ui.viewport->spotExponent1);
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->pointLight2Val = 0.0;
			this->ui.viewport->spotCut2 = 180;
			this->ui.viewport->spotExponent2 = 0;
			this->ui.spotCutoff->setValue(this->ui.viewport->spotCut2);
			this->ui.spotExponent->setValue(this->ui.viewport->spotExponent2);
		}
	}
	this->ui.viewport->update();
}

void FinalProjectQT::spotLightSpecs(double spot) {
	QDoubleSpinBox* doubleSpot = (QDoubleSpinBox*)sender();
	QString doubleBox = doubleSpot->objectName();
	string spotName = doubleBox.toStdString();

	if (spotName == "constantSpinBox") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->constant0 = spot;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->constant1 = spot;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->constant2 = spot;
		}
	}
	else if (spotName == "linearSpinBox") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->linear0 = spot;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->linear1 = spot;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->linear2 = spot;
		}
	}
	else if (spotName == "quadSpinBox") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->quad0 = spot;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->quad1 = spot;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->quad2 = spot;
		}
	}
	else if (spotName == "spotCutoff") {
		if (this->ui.viewport->lightControl == 0 && this->ui.viewport->pointLight0Val == 1.0f) { //Only apply effects if the current mode is point light
			this->ui.viewport->spotCut0 = spot;
		}
		else if (this->ui.viewport->lightControl == 1 && this->ui.viewport->pointLight1Val == 1.0f) {
			this->ui.viewport->spotCut1 = spot;
		}
		else if (this->ui.viewport->lightControl == 2 && this->ui.viewport->pointLight2Val == 1.0f) {
			this->ui.viewport->spotCut2 = spot;
		}
	}
	else if (spotName == "spotExponent") {
		if (this->ui.viewport->lightControl == 0 && this->ui.viewport->pointLight0Val == 1.0f) {
			this->ui.viewport->spotExponent0 = spot;
		}
		else if (this->ui.viewport->lightControl == 1 && this->ui.viewport->pointLight1Val == 1.0f) {
			this->ui.viewport->spotExponent1 = spot;
		}
		else if (this->ui.viewport->lightControl == 2 && this->ui.viewport->pointLight2Val == 1.0f) {
			this->ui.viewport->spotExponent2 = spot;
		}
	}
	this->ui.viewport->update();
}

void FinalProjectQT::lightMovement(int value) {
	QSpinBox* lightSpin = (QSpinBox*)sender();
	QString lightBoxName = lightSpin->objectName();
	string lightName = lightBoxName.toStdString();

	if (lightName == "lightPosX") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->light0_posX = value;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->light1_posX = value;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->light2_posX = value;
		}
	}
	else if (lightName == "lightPosY") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->light0_posY = value;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->light1_posY = value;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->light2_posY = value;
		}
	}
	else if (lightName == "lightPosZ") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->light0_posZ = value;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->light1_posZ = value;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->light2_posZ = value;
		}
	}
	else if (lightName == "directionX") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->dirVec0X = value;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->dirVec1X = value;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->dirVec2X = value;
		}
	}
	else if (lightName == "directionY") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->dirVec0Y = value;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->dirVec1Y = value;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->dirVec2Y = value;
		}
	}
	else if (lightName == "directionZ") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->dirVec0Z = value;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->dirVec1Z = value;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->dirVec2Z = value;
		}
	}
	else if (lightName == "lightRotX") {//Not implemented

	}
	else if (lightName == "lightRotY") {
		if (this->ui.viewport->lightControl == 0) {
			this->ui.viewport->angle_light0 = value;
		}
		else if (this->ui.viewport->lightControl == 1) {
			this->ui.viewport->angle_light1 = value;
		}
		else if (this->ui.viewport->lightControl == 2) {
			this->ui.viewport->angle_light2 = value;
		}
	}
	else if (lightName == "lightRotZ") {//Not implemented

	}

	this->ui.viewport->update();
}

void FinalProjectQT::updateCamRotation(int value) {
	QSlider* slider = (QSlider*)sender();
	QString sliderName = slider->objectName();
	string sName = sliderName.toStdString();

	if (sName == "camRotXSlider") {
		this->ui.viewport->camRotX = value;
	}
	else if (sName == "camRotYSlider") {
		this->ui.viewport->camRotY = value;
	}
	else if (sName == "camRotZSlider") {
		this->ui.viewport->camRotZ = value;
	}
	this->ui.viewport->update();
}

void FinalProjectQT::updateCamPosition(int value) { //kind of want to change this to sliders (do it later)
	QSpinBox* cameraSpin = (QSpinBox*)sender();
	QString camSpinName = cameraSpin->objectName();
	string camName = camSpinName.toStdString();

	if (camName == "camPosXspinBox") {
		this->ui.viewport->camPosX = value;
	}
	else if (camName == "camPosYspinBox") {
		this->ui.viewport->camPosY = value;
	}
	else if (camName == "camPosZspinBox") {
		this->ui.viewport->camPosZ = value;
	}
	else if (camName == "camLookX") {
		this->ui.viewport->camLookX = value;
	}
	else if (camName == "camLookY") {
		this->ui.viewport->camLookY = value;
	}
	else if (camName == "camLookZ") {
		this->ui.viewport->camLookZ = value;
	}
	this->ui.viewport->update();
}
