#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FinalProjectQT.h"

class FinalProjectQT : public QMainWindow {
    Q_OBJECT

public:
    FinalProjectQT(QWidget *parent = Q_NULLPTR);
    //All of our QT functions
    QPushButton* buttons[6];
    QCheckBox* checkBoxes[3];
    QSlider* rotSlides[3];
    QSpinBox* camBox[6];
    QSpinBox* lightBox[9];
    QDoubleSpinBox* spotlight[5];
    QRadioButton* radio[7];
	QTimer* timer;
public slots:
	void addTime();

	void chooseModel(QString modelName);
	void changeTextureDefault(int index);
	void toggleTexture(int checked);
	void toggleLight(int checked);			//This will check which lights are on
	void shaderType(bool checked);

	void currentLightControl(int index);	//This will check what the current light's specs are 
	void changeColor();						//This will change light color and specs
	void changeShininess(double shiny);		//This will update the material shininess 
	void lightProperty(QString light);		//This defines the point vs directional light
	void spotLightSpecs(double spot);
	void lightMovement(int value);			//This will get light direction and movement vectors

	void updateCamRotation(int value);		//This will update the camera's rotational axis/position
	void updateCamPosition(int value);		//This will update the camera's position
private:
    Ui::FinalProjectQTClass ui;
};
