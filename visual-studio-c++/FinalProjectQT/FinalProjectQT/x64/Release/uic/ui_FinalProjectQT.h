/********************************************************************************
** Form generated from reading UI file 'FinalProjectQT.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINALPROJECTQT_H
#define UI_FINALPROJECTQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QViewport.h"

QT_BEGIN_NAMESPACE

class Ui_FinalProjectQTClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_9;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QGridLayout *toggleLightsGridLayout;
    QLabel *light1Label;
    QLabel *light2Label;
    QCheckBox *light1CheckBox;
    QCheckBox *light0CheckBox;
    QCheckBox *light2CheckBox;
    QLabel *light0Label;
    QLabel *toggleLightsLabel;
    QWidget *widget;
    QWidget *widget_2;
    QFrame *frame_7;
    QGridLayout *gridLayout_6;
    QGridLayout *shadersGrid;
    QWidget *widget_16;
    QRadioButton *noShaderButton;
    QRadioButton *perPixelShaderButton;
    QLabel *shaderLabel;
    QRadioButton *normalShaderButton;
    QWidget *widget_17;
    QRadioButton *phongShaderButton;
    QRadioButton *toonShaderButton;
    QRadioButton *custom1ShaderButton;
    QRadioButton *custom2ShaderButton;
    QFrame *frame_4;
    QGridLayout *gridLayout_4;
    QGridLayout *lightControlsGrid;
    QLabel *constantAttenLabel;
    QLabel *zCoordLabel;
    QLabel *linearAttenLabel;
    QLabel *lightRotLabel;
    QSpinBox *lightRotY;
    QLabel *yCoordLabel;
    QSpinBox *lightPosX;
    QWidget *widget_9;
    QWidget *widget_6;
    QLabel *exponentLabel;
    QWidget *widget_8;
    QLabel *lightPropertyLabel;
    QWidget *widget_11;
    QPushButton *lightDiffuseButton;
    QDoubleSpinBox *constantSpinBox;
    QPushButton *lightAmbientButton;
    QLabel *cutoffLabel;
    QWidget *widget_7;
    QWidget *widget_12;
    QLabel *attentuationLabel;
    QLabel *xCoordLabel;
    QLabel *lightPosLabel;
    QComboBox *lightPropertyComboBox;
    QDoubleSpinBox *linearSpinBox;
    QPushButton *lightSpecularButton;
    QDoubleSpinBox *spotCutoff;
    QDoubleSpinBox *quadSpinBox;
    QDoubleSpinBox *spotExponent;
    QComboBox *lightTypeComboBox;
    QSpinBox *lightPosZ;
    QSpinBox *lightPosY;
    QLabel *quadAttenLabel;
    QLabel *controlLightLabel;
    QWidget *widget_10;
    QLabel *directionVecLabel;
    QSpinBox *directionX;
    QSpinBox *directionY;
    QSpinBox *directionZ;
    QSpinBox *lightRotZ;
    QSpinBox *lightRotX;
    QFrame *frame_6;
    QGridLayout *gridLayout_7;
    QGridLayout *camPosGrid;
    QSpinBox *camPosXspinBox;
    QLabel *camPosLabel;
    QSpinBox *camPosZspinBox;
    QSpinBox *camLookZ;
    QWidget *widget_14;
    QSpinBox *camLookX;
    QLabel *camPosY;
    QLabel *camLookAtLabel;
    QSpinBox *camLookY;
    QLabel *camPosX;
    QLabel *camPosZ;
    QSpinBox *camPosYspinBox;
    QFrame *frame_5;
    QGridLayout *gridLayout_5;
    QGridLayout *camRotGrid;
    QLabel *camRotX;
    QLabel *camRotY;
    QLabel *camRotZ;
    QSlider *camRotYSlider;
    QSlider *camRotXSlider;
    QSlider *camRotZSlider;
    QLabel *camRotateLabel;
    QWidget *widget_13;
    QWidget *widget_18;
    QFrame *frame_9;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout;
    QLabel *textureLabel;
    QCheckBox *textureCheckBox;
    QFrame *frame_8;
    QGridLayout *gridLayout_8;
    QVBoxLayout *modelVerticalLayout;
    QLabel *modelTypeLabel;
    QComboBox *modelsList;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QGridLayout *materialControlsGrid;
    QPushButton *matAmbientButton;
    QPushButton *matSpecularButton;
    QLabel *shininessLabel;
    QDoubleSpinBox *shininessSpinBox;
    QPushButton *matDiffuseButton;
    QLabel *materialLabel;
    QWidget *widget_3;
    QWidget *widget_4;
    QWidget *widget_5;
    QViewport *viewport;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *FinalProjectQTClass)
    {
        if (FinalProjectQTClass->objectName().isEmpty())
            FinalProjectQTClass->setObjectName(QString::fromUtf8("FinalProjectQTClass"));
        FinalProjectQTClass->resize(1400, 1000);
        FinalProjectQTClass->setMinimumSize(QSize(600, 600));
        FinalProjectQTClass->setBaseSize(QSize(1000, 1000));
        centralWidget = new QWidget(FinalProjectQTClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(221, 111));
        frame_2->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        toggleLightsGridLayout = new QGridLayout();
        toggleLightsGridLayout->setSpacing(6);
        toggleLightsGridLayout->setObjectName(QString::fromUtf8("toggleLightsGridLayout"));
        light1Label = new QLabel(frame_2);
        light1Label->setObjectName(QString::fromUtf8("light1Label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        light1Label->setFont(font);
        light1Label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        toggleLightsGridLayout->addWidget(light1Label, 1, 1, 1, 1);

        light2Label = new QLabel(frame_2);
        light2Label->setObjectName(QString::fromUtf8("light2Label"));
        light2Label->setFont(font);
        light2Label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        toggleLightsGridLayout->addWidget(light2Label, 1, 2, 1, 1);

        light1CheckBox = new QCheckBox(frame_2);
        light1CheckBox->setObjectName(QString::fromUtf8("light1CheckBox"));
        QFont font1;
        font1.setPointSize(10);
        light1CheckBox->setFont(font1);
        light1CheckBox->setChecked(true);

        toggleLightsGridLayout->addWidget(light1CheckBox, 2, 1, 1, 1);

        light0CheckBox = new QCheckBox(frame_2);
        light0CheckBox->setObjectName(QString::fromUtf8("light0CheckBox"));
        light0CheckBox->setFont(font1);
        light0CheckBox->setChecked(true);

        toggleLightsGridLayout->addWidget(light0CheckBox, 2, 0, 1, 1);

        light2CheckBox = new QCheckBox(frame_2);
        light2CheckBox->setObjectName(QString::fromUtf8("light2CheckBox"));
        light2CheckBox->setFont(font1);
        light2CheckBox->setChecked(true);

        toggleLightsGridLayout->addWidget(light2CheckBox, 2, 2, 1, 1);

        light0Label = new QLabel(frame_2);
        light0Label->setObjectName(QString::fromUtf8("light0Label"));
        light0Label->setFont(font);
        light0Label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        toggleLightsGridLayout->addWidget(light0Label, 1, 0, 1, 1);

        toggleLightsLabel = new QLabel(frame_2);
        toggleLightsLabel->setObjectName(QString::fromUtf8("toggleLightsLabel"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setUnderline(true);
        toggleLightsLabel->setFont(font2);
        toggleLightsLabel->setAlignment(Qt::AlignCenter);

        toggleLightsGridLayout->addWidget(toggleLightsLabel, 0, 1, 1, 1);

        widget = new QWidget(frame_2);
        widget->setObjectName(QString::fromUtf8("widget"));

        toggleLightsGridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(frame_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        toggleLightsGridLayout->addWidget(widget_2, 0, 2, 1, 1);


        gridLayout_3->addLayout(toggleLightsGridLayout, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame_2, 3, 1, 1, 1);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_7);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        shadersGrid = new QGridLayout();
        shadersGrid->setSpacing(6);
        shadersGrid->setObjectName(QString::fromUtf8("shadersGrid"));
        widget_16 = new QWidget(frame_7);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));

        shadersGrid->addWidget(widget_16, 0, 0, 1, 1);

        noShaderButton = new QRadioButton(frame_7);
        buttonGroup = new QButtonGroup(FinalProjectQTClass);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(noShaderButton);
        noShaderButton->setObjectName(QString::fromUtf8("noShaderButton"));
        noShaderButton->setFont(font1);
        noShaderButton->setChecked(true);

        shadersGrid->addWidget(noShaderButton, 1, 0, 1, 1);

        perPixelShaderButton = new QRadioButton(frame_7);
        buttonGroup->addButton(perPixelShaderButton);
        perPixelShaderButton->setObjectName(QString::fromUtf8("perPixelShaderButton"));
        perPixelShaderButton->setFont(font1);

        shadersGrid->addWidget(perPixelShaderButton, 1, 2, 1, 1);

        shaderLabel = new QLabel(frame_7);
        shaderLabel->setObjectName(QString::fromUtf8("shaderLabel"));
        shaderLabel->setFont(font2);
        shaderLabel->setAlignment(Qt::AlignCenter);

        shadersGrid->addWidget(shaderLabel, 0, 1, 1, 1);

        normalShaderButton = new QRadioButton(frame_7);
        buttonGroup->addButton(normalShaderButton);
        normalShaderButton->setObjectName(QString::fromUtf8("normalShaderButton"));
        normalShaderButton->setFont(font1);

        shadersGrid->addWidget(normalShaderButton, 1, 1, 1, 1);

        widget_17 = new QWidget(frame_7);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));

        shadersGrid->addWidget(widget_17, 0, 2, 1, 1);

        phongShaderButton = new QRadioButton(frame_7);
        buttonGroup->addButton(phongShaderButton);
        phongShaderButton->setObjectName(QString::fromUtf8("phongShaderButton"));
        phongShaderButton->setFont(font1);

        shadersGrid->addWidget(phongShaderButton, 2, 0, 1, 1);

        toonShaderButton = new QRadioButton(frame_7);
        buttonGroup->addButton(toonShaderButton);
        toonShaderButton->setObjectName(QString::fromUtf8("toonShaderButton"));
        toonShaderButton->setFont(font1);

        shadersGrid->addWidget(toonShaderButton, 2, 1, 1, 1);

        custom1ShaderButton = new QRadioButton(frame_7);
        buttonGroup->addButton(custom1ShaderButton);
        custom1ShaderButton->setObjectName(QString::fromUtf8("custom1ShaderButton"));
        custom1ShaderButton->setFont(font1);

        shadersGrid->addWidget(custom1ShaderButton, 2, 2, 1, 1);

        custom2ShaderButton = new QRadioButton(frame_7);
        buttonGroup->addButton(custom2ShaderButton);
        custom2ShaderButton->setObjectName(QString::fromUtf8("custom2ShaderButton"));
        custom2ShaderButton->setFont(font1);

        shadersGrid->addWidget(custom2ShaderButton, 3, 0, 1, 1);


        gridLayout_6->addLayout(shadersGrid, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame_7, 1, 1, 1, 1);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lightControlsGrid = new QGridLayout();
        lightControlsGrid->setSpacing(6);
        lightControlsGrid->setObjectName(QString::fromUtf8("lightControlsGrid"));
        constantAttenLabel = new QLabel(frame_4);
        constantAttenLabel->setObjectName(QString::fromUtf8("constantAttenLabel"));
        constantAttenLabel->setFont(font1);

        lightControlsGrid->addWidget(constantAttenLabel, 7, 1, 1, 1);

        zCoordLabel = new QLabel(frame_4);
        zCoordLabel->setObjectName(QString::fromUtf8("zCoordLabel"));
        zCoordLabel->setFont(font1);

        lightControlsGrid->addWidget(zCoordLabel, 1, 3, 1, 1);

        linearAttenLabel = new QLabel(frame_4);
        linearAttenLabel->setObjectName(QString::fromUtf8("linearAttenLabel"));
        linearAttenLabel->setFont(font1);

        lightControlsGrid->addWidget(linearAttenLabel, 7, 2, 1, 1);

        lightRotLabel = new QLabel(frame_4);
        lightRotLabel->setObjectName(QString::fromUtf8("lightRotLabel"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        lightRotLabel->setFont(font3);

        lightControlsGrid->addWidget(lightRotLabel, 4, 0, 1, 1);

        lightRotY = new QSpinBox(frame_4);
        lightRotY->setObjectName(QString::fromUtf8("lightRotY"));
        lightRotY->setFont(font1);
        lightRotY->setMaximum(360);

        lightControlsGrid->addWidget(lightRotY, 4, 2, 1, 1);

        yCoordLabel = new QLabel(frame_4);
        yCoordLabel->setObjectName(QString::fromUtf8("yCoordLabel"));
        yCoordLabel->setFont(font1);

        lightControlsGrid->addWidget(yCoordLabel, 1, 2, 1, 1);

        lightPosX = new QSpinBox(frame_4);
        lightPosX->setObjectName(QString::fromUtf8("lightPosX"));
        lightPosX->setFont(font1);
        lightPosX->setMinimum(-20000);
        lightPosX->setMaximum(20000);

        lightControlsGrid->addWidget(lightPosX, 2, 1, 1, 1);

        widget_9 = new QWidget(frame_4);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));

        lightControlsGrid->addWidget(widget_9, 7, 0, 1, 1);

        widget_6 = new QWidget(frame_4);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));

        lightControlsGrid->addWidget(widget_6, 0, 0, 1, 1);

        exponentLabel = new QLabel(frame_4);
        exponentLabel->setObjectName(QString::fromUtf8("exponentLabel"));
        exponentLabel->setFont(font3);

        lightControlsGrid->addWidget(exponentLabel, 10, 2, 1, 1);

        widget_8 = new QWidget(frame_4);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));

        lightControlsGrid->addWidget(widget_8, 6, 0, 1, 1);

        lightPropertyLabel = new QLabel(frame_4);
        lightPropertyLabel->setObjectName(QString::fromUtf8("lightPropertyLabel"));
        lightPropertyLabel->setFont(font3);

        lightControlsGrid->addWidget(lightPropertyLabel, 9, 0, 1, 1);

        widget_11 = new QWidget(frame_4);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));

        lightControlsGrid->addWidget(widget_11, 9, 2, 1, 1);

        lightDiffuseButton = new QPushButton(frame_4);
        lightDiffuseButton->setObjectName(QString::fromUtf8("lightDiffuseButton"));
        lightDiffuseButton->setFont(font3);
        lightDiffuseButton->setStyleSheet(QString::fromUtf8("background-color: #3DD1D3;"));

        lightControlsGrid->addWidget(lightDiffuseButton, 6, 2, 1, 1);

        constantSpinBox = new QDoubleSpinBox(frame_4);
        constantSpinBox->setObjectName(QString::fromUtf8("constantSpinBox"));
        constantSpinBox->setFont(font1);

        lightControlsGrid->addWidget(constantSpinBox, 8, 1, 1, 1);

        lightAmbientButton = new QPushButton(frame_4);
        lightAmbientButton->setObjectName(QString::fromUtf8("lightAmbientButton"));
        lightAmbientButton->setFont(font3);
        lightAmbientButton->setMouseTracking(false);
        lightAmbientButton->setAutoFillBackground(false);
        lightAmbientButton->setStyleSheet(QString::fromUtf8("background-color: #3DD1D3;"));
        lightAmbientButton->setFlat(false);

        lightControlsGrid->addWidget(lightAmbientButton, 6, 1, 1, 1);

        cutoffLabel = new QLabel(frame_4);
        cutoffLabel->setObjectName(QString::fromUtf8("cutoffLabel"));
        cutoffLabel->setFont(font3);

        lightControlsGrid->addWidget(cutoffLabel, 10, 0, 1, 1);

        widget_7 = new QWidget(frame_4);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));

        lightControlsGrid->addWidget(widget_7, 1, 0, 1, 1);

        widget_12 = new QWidget(frame_4);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));

        lightControlsGrid->addWidget(widget_12, 9, 3, 1, 1);

        attentuationLabel = new QLabel(frame_4);
        attentuationLabel->setObjectName(QString::fromUtf8("attentuationLabel"));
        attentuationLabel->setFont(font3);

        lightControlsGrid->addWidget(attentuationLabel, 8, 0, 1, 1);

        xCoordLabel = new QLabel(frame_4);
        xCoordLabel->setObjectName(QString::fromUtf8("xCoordLabel"));
        xCoordLabel->setFont(font1);

        lightControlsGrid->addWidget(xCoordLabel, 1, 1, 1, 1);

        lightPosLabel = new QLabel(frame_4);
        lightPosLabel->setObjectName(QString::fromUtf8("lightPosLabel"));
        lightPosLabel->setFont(font3);

        lightControlsGrid->addWidget(lightPosLabel, 2, 0, 1, 1);

        lightPropertyComboBox = new QComboBox(frame_4);
        lightPropertyComboBox->addItem(QString());
        lightPropertyComboBox->addItem(QString());
        lightPropertyComboBox->setObjectName(QString::fromUtf8("lightPropertyComboBox"));
        lightPropertyComboBox->setFont(font1);

        lightControlsGrid->addWidget(lightPropertyComboBox, 9, 1, 1, 1);

        linearSpinBox = new QDoubleSpinBox(frame_4);
        linearSpinBox->setObjectName(QString::fromUtf8("linearSpinBox"));
        linearSpinBox->setFont(font1);

        lightControlsGrid->addWidget(linearSpinBox, 8, 2, 1, 1);

        lightSpecularButton = new QPushButton(frame_4);
        lightSpecularButton->setObjectName(QString::fromUtf8("lightSpecularButton"));
        lightSpecularButton->setFont(font3);
        lightSpecularButton->setStyleSheet(QString::fromUtf8("background-color: #3DD1D3;"));

        lightControlsGrid->addWidget(lightSpecularButton, 6, 3, 1, 1);

        spotCutoff = new QDoubleSpinBox(frame_4);
        spotCutoff->setObjectName(QString::fromUtf8("spotCutoff"));
        spotCutoff->setFont(font1);
        spotCutoff->setMaximum(180.000000000000000);

        lightControlsGrid->addWidget(spotCutoff, 10, 1, 1, 1);

        quadSpinBox = new QDoubleSpinBox(frame_4);
        quadSpinBox->setObjectName(QString::fromUtf8("quadSpinBox"));
        quadSpinBox->setFont(font1);

        lightControlsGrid->addWidget(quadSpinBox, 8, 3, 1, 1);

        spotExponent = new QDoubleSpinBox(frame_4);
        spotExponent->setObjectName(QString::fromUtf8("spotExponent"));
        spotExponent->setFont(font1);

        lightControlsGrid->addWidget(spotExponent, 10, 3, 1, 1);

        lightTypeComboBox = new QComboBox(frame_4);
        lightTypeComboBox->addItem(QString());
        lightTypeComboBox->addItem(QString());
        lightTypeComboBox->addItem(QString());
        lightTypeComboBox->setObjectName(QString::fromUtf8("lightTypeComboBox"));
        lightTypeComboBox->setFont(font1);

        lightControlsGrid->addWidget(lightTypeComboBox, 0, 2, 1, 1);

        lightPosZ = new QSpinBox(frame_4);
        lightPosZ->setObjectName(QString::fromUtf8("lightPosZ"));
        lightPosZ->setFont(font1);
        lightPosZ->setMinimum(-20000);
        lightPosZ->setMaximum(20000);

        lightControlsGrid->addWidget(lightPosZ, 2, 3, 1, 1);

        lightPosY = new QSpinBox(frame_4);
        lightPosY->setObjectName(QString::fromUtf8("lightPosY"));
        lightPosY->setFont(font1);
        lightPosY->setMinimum(-20000);
        lightPosY->setMaximum(20000);

        lightControlsGrid->addWidget(lightPosY, 2, 2, 1, 1);

        quadAttenLabel = new QLabel(frame_4);
        quadAttenLabel->setObjectName(QString::fromUtf8("quadAttenLabel"));
        quadAttenLabel->setFont(font1);

        lightControlsGrid->addWidget(quadAttenLabel, 7, 3, 1, 1);

        controlLightLabel = new QLabel(frame_4);
        controlLightLabel->setObjectName(QString::fromUtf8("controlLightLabel"));
        controlLightLabel->setFont(font2);
        controlLightLabel->setAlignment(Qt::AlignCenter);

        lightControlsGrid->addWidget(controlLightLabel, 0, 1, 1, 1);

        widget_10 = new QWidget(frame_4);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));

        lightControlsGrid->addWidget(widget_10, 0, 3, 1, 1);

        directionVecLabel = new QLabel(frame_4);
        directionVecLabel->setObjectName(QString::fromUtf8("directionVecLabel"));
        directionVecLabel->setFont(font3);

        lightControlsGrid->addWidget(directionVecLabel, 3, 0, 1, 1);

        directionX = new QSpinBox(frame_4);
        directionX->setObjectName(QString::fromUtf8("directionX"));
        directionX->setFont(font1);
        directionX->setMinimum(-1000);
        directionX->setMaximum(1000);

        lightControlsGrid->addWidget(directionX, 3, 1, 1, 1);

        directionY = new QSpinBox(frame_4);
        directionY->setObjectName(QString::fromUtf8("directionY"));
        directionY->setFont(font1);
        directionY->setMinimum(-1000);
        directionY->setMaximum(1000);

        lightControlsGrid->addWidget(directionY, 3, 2, 1, 1);

        directionZ = new QSpinBox(frame_4);
        directionZ->setObjectName(QString::fromUtf8("directionZ"));
        directionZ->setFont(font1);
        directionZ->setMinimum(-1000);
        directionZ->setMaximum(1000);

        lightControlsGrid->addWidget(directionZ, 3, 3, 1, 1);

        lightRotZ = new QSpinBox(frame_4);
        lightRotZ->setObjectName(QString::fromUtf8("lightRotZ"));
        lightRotZ->setFont(font1);
        lightRotZ->setMaximum(360);

        lightControlsGrid->addWidget(lightRotZ, 4, 3, 1, 1);

        lightRotX = new QSpinBox(frame_4);
        lightRotX->setObjectName(QString::fromUtf8("lightRotX"));
        lightRotX->setFont(font1);
        lightRotX->setMaximum(360);

        lightControlsGrid->addWidget(lightRotX, 4, 1, 1, 1);


        gridLayout_4->addLayout(lightControlsGrid, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame_4, 3, 2, 3, 2);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        camPosGrid = new QGridLayout();
        camPosGrid->setSpacing(6);
        camPosGrid->setObjectName(QString::fromUtf8("camPosGrid"));
        camPosXspinBox = new QSpinBox(frame_6);
        camPosXspinBox->setObjectName(QString::fromUtf8("camPosXspinBox"));
        camPosXspinBox->setFont(font1);
        camPosXspinBox->setMinimum(-20000);
        camPosXspinBox->setMaximum(20000);

        camPosGrid->addWidget(camPosXspinBox, 1, 1, 1, 1);

        camPosLabel = new QLabel(frame_6);
        camPosLabel->setObjectName(QString::fromUtf8("camPosLabel"));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setUnderline(false);
        camPosLabel->setFont(font4);
        camPosLabel->setAlignment(Qt::AlignCenter);

        camPosGrid->addWidget(camPosLabel, 1, 0, 1, 1);

        camPosZspinBox = new QSpinBox(frame_6);
        camPosZspinBox->setObjectName(QString::fromUtf8("camPosZspinBox"));
        camPosZspinBox->setFont(font1);
        camPosZspinBox->setMinimum(-20000);
        camPosZspinBox->setMaximum(20000);
        camPosZspinBox->setValue(0);

        camPosGrid->addWidget(camPosZspinBox, 1, 3, 1, 1);

        camLookZ = new QSpinBox(frame_6);
        camLookZ->setObjectName(QString::fromUtf8("camLookZ"));
        camLookZ->setFont(font1);
        camLookZ->setMinimum(-20000);
        camLookZ->setMaximum(20000);

        camPosGrid->addWidget(camLookZ, 2, 3, 1, 1);

        widget_14 = new QWidget(frame_6);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));

        camPosGrid->addWidget(widget_14, 0, 0, 1, 1);

        camLookX = new QSpinBox(frame_6);
        camLookX->setObjectName(QString::fromUtf8("camLookX"));
        camLookX->setFont(font1);
        camLookX->setMinimum(-20000);
        camLookX->setMaximum(20000);

        camPosGrid->addWidget(camLookX, 2, 1, 1, 1);

        camPosY = new QLabel(frame_6);
        camPosY->setObjectName(QString::fromUtf8("camPosY"));
        camPosY->setMinimumSize(QSize(0, 20));
        camPosY->setFont(font1);

        camPosGrid->addWidget(camPosY, 0, 2, 1, 1);

        camLookAtLabel = new QLabel(frame_6);
        camLookAtLabel->setObjectName(QString::fromUtf8("camLookAtLabel"));
        camLookAtLabel->setFont(font3);

        camPosGrid->addWidget(camLookAtLabel, 2, 0, 1, 1);

        camLookY = new QSpinBox(frame_6);
        camLookY->setObjectName(QString::fromUtf8("camLookY"));
        camLookY->setFont(font1);
        camLookY->setMinimum(-20000);
        camLookY->setMaximum(20000);

        camPosGrid->addWidget(camLookY, 2, 2, 1, 1);

        camPosX = new QLabel(frame_6);
        camPosX->setObjectName(QString::fromUtf8("camPosX"));
        camPosX->setMinimumSize(QSize(0, 20));
        camPosX->setFont(font1);

        camPosGrid->addWidget(camPosX, 0, 1, 1, 1);

        camPosZ = new QLabel(frame_6);
        camPosZ->setObjectName(QString::fromUtf8("camPosZ"));
        camPosZ->setMinimumSize(QSize(0, 20));
        camPosZ->setFont(font1);

        camPosGrid->addWidget(camPosZ, 0, 3, 1, 1);

        camPosYspinBox = new QSpinBox(frame_6);
        camPosYspinBox->setObjectName(QString::fromUtf8("camPosYspinBox"));
        camPosYspinBox->setFont(font1);
        camPosYspinBox->setMinimum(-20000);
        camPosYspinBox->setMaximum(20000);

        camPosGrid->addWidget(camPosYspinBox, 1, 2, 1, 1);


        gridLayout_7->addLayout(camPosGrid, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame_6, 0, 2, 1, 2);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        camRotGrid = new QGridLayout();
        camRotGrid->setSpacing(6);
        camRotGrid->setObjectName(QString::fromUtf8("camRotGrid"));
        camRotX = new QLabel(frame_5);
        camRotX->setObjectName(QString::fromUtf8("camRotX"));
        camRotX->setMinimumSize(QSize(40, 0));
        camRotX->setFont(font1);

        camRotGrid->addWidget(camRotX, 1, 0, 1, 1);

        camRotY = new QLabel(frame_5);
        camRotY->setObjectName(QString::fromUtf8("camRotY"));
        camRotY->setMinimumSize(QSize(40, 0));
        camRotY->setFont(font1);

        camRotGrid->addWidget(camRotY, 2, 0, 1, 1);

        camRotZ = new QLabel(frame_5);
        camRotZ->setObjectName(QString::fromUtf8("camRotZ"));
        sizePolicy.setHeightForWidth(camRotZ->sizePolicy().hasHeightForWidth());
        camRotZ->setSizePolicy(sizePolicy);
        camRotZ->setMinimumSize(QSize(40, 0));
        camRotZ->setFont(font1);

        camRotGrid->addWidget(camRotZ, 3, 0, 1, 1);

        camRotYSlider = new QSlider(frame_5);
        camRotYSlider->setObjectName(QString::fromUtf8("camRotYSlider"));
        sizePolicy.setHeightForWidth(camRotYSlider->sizePolicy().hasHeightForWidth());
        camRotYSlider->setSizePolicy(sizePolicy);
        camRotYSlider->setMaximum(360);
        camRotYSlider->setOrientation(Qt::Horizontal);

        camRotGrid->addWidget(camRotYSlider, 2, 1, 1, 2);

        camRotXSlider = new QSlider(frame_5);
        camRotXSlider->setObjectName(QString::fromUtf8("camRotXSlider"));
        sizePolicy.setHeightForWidth(camRotXSlider->sizePolicy().hasHeightForWidth());
        camRotXSlider->setSizePolicy(sizePolicy);
        camRotXSlider->setMaximum(360);
        camRotXSlider->setOrientation(Qt::Horizontal);

        camRotGrid->addWidget(camRotXSlider, 1, 1, 1, 2);

        camRotZSlider = new QSlider(frame_5);
        camRotZSlider->setObjectName(QString::fromUtf8("camRotZSlider"));
        sizePolicy.setHeightForWidth(camRotZSlider->sizePolicy().hasHeightForWidth());
        camRotZSlider->setSizePolicy(sizePolicy);
        camRotZSlider->setMaximum(360);
        camRotZSlider->setOrientation(Qt::Horizontal);

        camRotGrid->addWidget(camRotZSlider, 3, 1, 1, 2);

        camRotateLabel = new QLabel(frame_5);
        camRotateLabel->setObjectName(QString::fromUtf8("camRotateLabel"));
        camRotateLabel->setFont(font2);
        camRotateLabel->setAlignment(Qt::AlignCenter);

        camRotGrid->addWidget(camRotateLabel, 0, 1, 1, 1);

        widget_13 = new QWidget(frame_5);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));

        camRotGrid->addWidget(widget_13, 0, 0, 1, 1);

        widget_18 = new QWidget(frame_5);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));

        camRotGrid->addWidget(widget_18, 0, 2, 1, 1);


        gridLayout_5->addLayout(camRotGrid, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame_5, 1, 2, 2, 2);

        frame_9 = new QFrame(frame);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame_9);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textureLabel = new QLabel(frame_9);
        textureLabel->setObjectName(QString::fromUtf8("textureLabel"));
        textureLabel->setMinimumSize(QSize(231, 50));
        textureLabel->setFont(font2);
        textureLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(textureLabel);

        textureCheckBox = new QCheckBox(frame_9);
        textureCheckBox->setObjectName(QString::fromUtf8("textureCheckBox"));
        textureCheckBox->setMinimumSize(QSize(231, 35));
        textureCheckBox->setFont(font1);
        textureCheckBox->setChecked(false);

        verticalLayout->addWidget(textureCheckBox);


        gridLayout_10->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame_9, 2, 1, 1, 1);

        frame_8 = new QFrame(frame);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_8);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        modelVerticalLayout = new QVBoxLayout();
        modelVerticalLayout->setSpacing(6);
        modelVerticalLayout->setObjectName(QString::fromUtf8("modelVerticalLayout"));
        modelTypeLabel = new QLabel(frame_8);
        modelTypeLabel->setObjectName(QString::fromUtf8("modelTypeLabel"));
        modelTypeLabel->setMinimumSize(QSize(81, 45));
        modelTypeLabel->setBaseSize(QSize(231, 45));
        modelTypeLabel->setFont(font2);
        modelTypeLabel->setAlignment(Qt::AlignCenter);

        modelVerticalLayout->addWidget(modelTypeLabel);

        modelsList = new QComboBox(frame_8);
        modelsList->addItem(QString());
        modelsList->addItem(QString());
        modelsList->addItem(QString());
        modelsList->addItem(QString());
        modelsList->addItem(QString());
        modelsList->addItem(QString());
        modelsList->addItem(QString());
        modelsList->addItem(QString());
        modelsList->addItem(QString());
        modelsList->setObjectName(QString::fromUtf8("modelsList"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modelsList->sizePolicy().hasHeightForWidth());
        modelsList->setSizePolicy(sizePolicy1);
        modelsList->setMinimumSize(QSize(231, 35));
        modelsList->setBaseSize(QSize(231, 35));
        modelsList->setFont(font1);

        modelVerticalLayout->addWidget(modelsList);


        gridLayout_8->addLayout(modelVerticalLayout, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame_8, 0, 1, 1, 1);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        materialControlsGrid = new QGridLayout();
        materialControlsGrid->setSpacing(6);
        materialControlsGrid->setObjectName(QString::fromUtf8("materialControlsGrid"));
        matAmbientButton = new QPushButton(frame_3);
        matAmbientButton->setObjectName(QString::fromUtf8("matAmbientButton"));
        matAmbientButton->setFont(font3);
        matAmbientButton->setStyleSheet(QString::fromUtf8("background-color: #3DD1D3;"));

        materialControlsGrid->addWidget(matAmbientButton, 1, 0, 1, 1);

        matSpecularButton = new QPushButton(frame_3);
        matSpecularButton->setObjectName(QString::fromUtf8("matSpecularButton"));
        matSpecularButton->setFont(font3);
        matSpecularButton->setStyleSheet(QString::fromUtf8("background-color: #3DD1D3;"));

        materialControlsGrid->addWidget(matSpecularButton, 1, 2, 1, 1);

        shininessLabel = new QLabel(frame_3);
        shininessLabel->setObjectName(QString::fromUtf8("shininessLabel"));
        shininessLabel->setFont(font3);

        materialControlsGrid->addWidget(shininessLabel, 2, 0, 1, 1);

        shininessSpinBox = new QDoubleSpinBox(frame_3);
        shininessSpinBox->setObjectName(QString::fromUtf8("shininessSpinBox"));
        shininessSpinBox->setFont(font1);
        shininessSpinBox->setMaximum(128.000000000000000);

        materialControlsGrid->addWidget(shininessSpinBox, 2, 1, 1, 1);

        matDiffuseButton = new QPushButton(frame_3);
        matDiffuseButton->setObjectName(QString::fromUtf8("matDiffuseButton"));
        matDiffuseButton->setFont(font3);
        matDiffuseButton->setStyleSheet(QString::fromUtf8("background-color: #3DD1D3;"));

        materialControlsGrid->addWidget(matDiffuseButton, 1, 1, 1, 1);

        materialLabel = new QLabel(frame_3);
        materialLabel->setObjectName(QString::fromUtf8("materialLabel"));
        materialLabel->setFont(font2);
        materialLabel->setAlignment(Qt::AlignCenter);

        materialControlsGrid->addWidget(materialLabel, 0, 1, 1, 1);

        widget_3 = new QWidget(frame_3);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));

        materialControlsGrid->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(frame_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));

        materialControlsGrid->addWidget(widget_4, 0, 2, 1, 1);

        widget_5 = new QWidget(frame_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));

        materialControlsGrid->addWidget(widget_5, 2, 2, 1, 1);


        gridLayout_2->addLayout(materialControlsGrid, 0, 0, 1, 1);


        gridLayout_9->addWidget(frame_3, 4, 1, 1, 1);

        viewport = new QViewport(frame);
        viewport->setObjectName(QString::fromUtf8("viewport"));
        sizePolicy.setHeightForWidth(viewport->sizePolicy().hasHeightForWidth());
        viewport->setSizePolicy(sizePolicy);
        viewport->setMinimumSize(QSize(500, 500));
        viewport->setBaseSize(QSize(500, 500));
        viewport->setLayoutDirection(Qt::LeftToRight);
        viewport->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);"));

        gridLayout_9->addWidget(viewport, 0, 0, 5, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        FinalProjectQTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FinalProjectQTClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1400, 22));
        FinalProjectQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FinalProjectQTClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        FinalProjectQTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FinalProjectQTClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FinalProjectQTClass->setStatusBar(statusBar);

        retranslateUi(FinalProjectQTClass);
        QObject::connect(modelsList, SIGNAL(currentTextChanged(QString)), FinalProjectQTClass, SLOT(chooseModel(QString)));
        QObject::connect(modelsList, SIGNAL(currentIndexChanged(int)), FinalProjectQTClass, SLOT(changeTextureDefault(int)));
        QObject::connect(lightTypeComboBox, SIGNAL(currentIndexChanged(int)), FinalProjectQTClass, SLOT(currentLightControl(int)));
        QObject::connect(shininessSpinBox, SIGNAL(valueChanged(double)), FinalProjectQTClass, SLOT(changeShininess(double)));
        QObject::connect(lightPropertyComboBox, SIGNAL(currentTextChanged(QString)), FinalProjectQTClass, SLOT(lightProperty(QString)));
        QObject::connect(textureCheckBox, SIGNAL(stateChanged(int)), FinalProjectQTClass, SLOT(toggleTexture(int)));

        lightAmbientButton->setDefault(false);


        QMetaObject::connectSlotsByName(FinalProjectQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *FinalProjectQTClass)
    {
        FinalProjectQTClass->setWindowTitle(QCoreApplication::translate("FinalProjectQTClass", "FinalProjectQT", nullptr));
        light1Label->setText(QCoreApplication::translate("FinalProjectQTClass", "Light1", nullptr));
        light2Label->setText(QCoreApplication::translate("FinalProjectQTClass", "Light2", nullptr));
        light1CheckBox->setText(QCoreApplication::translate("FinalProjectQTClass", "On", nullptr));
        light0CheckBox->setText(QCoreApplication::translate("FinalProjectQTClass", "On", nullptr));
        light2CheckBox->setText(QCoreApplication::translate("FinalProjectQTClass", "On", nullptr));
        light0Label->setText(QCoreApplication::translate("FinalProjectQTClass", "Light0", nullptr));
        toggleLightsLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Toggle Lights", nullptr));
        noShaderButton->setText(QCoreApplication::translate("FinalProjectQTClass", "None", nullptr));
        perPixelShaderButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Per-Pixel", nullptr));
        shaderLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Shaders", nullptr));
        normalShaderButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Normal", nullptr));
        phongShaderButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Phong", nullptr));
        toonShaderButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Toon", nullptr));
        custom1ShaderButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Custom", nullptr));
        custom2ShaderButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Custom 2", nullptr));
        constantAttenLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Constant", nullptr));
        zCoordLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Z", nullptr));
        linearAttenLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Linear", nullptr));
        lightRotLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Rotation Angle:", nullptr));
        yCoordLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Y", nullptr));
        exponentLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Exponent:", nullptr));
        lightPropertyLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Light Property:", nullptr));
        lightDiffuseButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Diffuse", nullptr));
        lightAmbientButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Ambient", nullptr));
        cutoffLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Cutoff:", nullptr));
        attentuationLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Attentuation:", nullptr));
        xCoordLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "X", nullptr));
        lightPosLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Position: ", nullptr));
        lightPropertyComboBox->setItemText(0, QCoreApplication::translate("FinalProjectQTClass", "Directional", nullptr));
        lightPropertyComboBox->setItemText(1, QCoreApplication::translate("FinalProjectQTClass", "Point", nullptr));

        lightSpecularButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Specular", nullptr));
        lightTypeComboBox->setItemText(0, QCoreApplication::translate("FinalProjectQTClass", "Light0", nullptr));
        lightTypeComboBox->setItemText(1, QCoreApplication::translate("FinalProjectQTClass", "Light1", nullptr));
        lightTypeComboBox->setItemText(2, QCoreApplication::translate("FinalProjectQTClass", "Light2", nullptr));

        quadAttenLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Quadratic", nullptr));
        controlLightLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Light Controls:", nullptr));
        directionVecLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Direction Vector:", nullptr));
        camPosLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Camera Position: ", nullptr));
        camPosY->setText(QCoreApplication::translate("FinalProjectQTClass", "Y", nullptr));
        camLookAtLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Camera Look At: ", nullptr));
        camPosX->setText(QCoreApplication::translate("FinalProjectQTClass", "X", nullptr));
        camPosZ->setText(QCoreApplication::translate("FinalProjectQTClass", "Z", nullptr));
        camRotX->setText(QCoreApplication::translate("FinalProjectQTClass", "X axis", nullptr));
        camRotY->setText(QCoreApplication::translate("FinalProjectQTClass", "Y axis", nullptr));
        camRotZ->setText(QCoreApplication::translate("FinalProjectQTClass", "Z axis", nullptr));
        camRotateLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Camera Rotation", nullptr));
        textureLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Toggle Texture", nullptr));
        textureCheckBox->setText(QCoreApplication::translate("FinalProjectQTClass", " On", nullptr));
        modelTypeLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Model Type", nullptr));
        modelsList->setItemText(0, QCoreApplication::translate("FinalProjectQTClass", "spaceship", nullptr));
        modelsList->setItemText(1, QCoreApplication::translate("FinalProjectQTClass", "a3dblend", nullptr));
        modelsList->setItemText(2, QCoreApplication::translate("FinalProjectQTClass", "aircyph", nullptr));
        modelsList->setItemText(3, QCoreApplication::translate("FinalProjectQTClass", "hst", nullptr));
        modelsList->setItemText(4, QCoreApplication::translate("FinalProjectQTClass", "wfpc2", nullptr));
        modelsList->setItemText(5, QCoreApplication::translate("FinalProjectQTClass", "a3dshovl", nullptr));
        modelsList->setItemText(6, QCoreApplication::translate("FinalProjectQTClass", "shuttle", nullptr));
        modelsList->setItemText(7, QCoreApplication::translate("FinalProjectQTClass", "tolcwrm1", nullptr));
        modelsList->setItemText(8, QCoreApplication::translate("FinalProjectQTClass", "Zepplin2", nullptr));

        matAmbientButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Ambient", nullptr));
        matSpecularButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Specular", nullptr));
        shininessLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Shininess:", nullptr));
        matDiffuseButton->setText(QCoreApplication::translate("FinalProjectQTClass", "Diffuse", nullptr));
        materialLabel->setText(QCoreApplication::translate("FinalProjectQTClass", "Material", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinalProjectQTClass: public Ui_FinalProjectQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINALPROJECTQT_H
