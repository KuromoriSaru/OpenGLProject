#pragma once

#include <QOpenGLWIdget>

#include <iostream>
using namespace std;

#define MAX_VERTICES 8000 // Max number of vertices (for each object)
#define MAX_POLYGONS 8000 // Max number of polygons (for each object)

// Our vertex type
typedef struct {
	float x, y, z;
}vertex_type;

// The polygon (triangle), 3 numbers that define 3 vertices
typedef struct {
	int a, b, c;
}polygon_type;

// The mapcoord type, 2 texture coordinates for each vertex
typedef struct {
	float u, v;
}mapcoord_type;

// The object type
typedef struct {
	char name[20];

	int vertices_qty;
	int polygons_qty;

	vertex_type vertex[MAX_VERTICES];
	polygon_type polygon[MAX_POLYGONS];
	mapcoord_type mapcoord[MAX_VERTICES];
	int id_texture;
} obj_type, * obj_type_ptr;


class QViewport : public QOpenGLWidget {
	Q_OBJECT

public:
	QViewport(QWidget* parent);
	virtual ~QViewport();

	//Functions to load textures in a .tga format
	void loadMap(GLenum target, char* filename);
	void updateWrap();
	void constructMap(char* filenames[], int arraySize);

	//Smaller functions to call in display function
	void setLightsMat();

	//All code for shaders has been taken from our class, such as ogl3.cpp, textfile.cpp, and textfile.h. 
	void printShaderInfoLog(GLuint obj);
	void printProgramInfoLog(GLuint obj);
	void setShaders(char* vert, char* frag); //Arguments for fragment and vertex files
	void detachShaders();

	void initializeGL();
	void paintGL();
	void resizeGL(int width, int height);

	//Variables that we change through our UI and are reflected onto the viewport
	float timer; //Constantly updates our viewport

	char* modelName;
	int changeMap; //Changes the texturemap on the model 
	bool textureOn;
	bool light0, light1, light2; //Check if the three lights we have are on or off
	int shaderType; //Shadertype refers to, 0 = no shaders, 1 = normal shaders, 2 = per pixel shaders, 3 = phong shading, 4 = toon shading, 5 = custom shading, 6 = second custom shading
	

	float camPosX, camPosY, camPosZ;
	int camRotX, camRotY, camRotZ;
	float camLookX, camLookY, camLookZ;

	int lightControl; //For the properties of the current light being controlled 

	float angle_light0; //Angle for the light shown on the model (Higher angle means more light)
	float light0_posX;  //Light angle distances in each axis
	float light0_posY;
	float light0_posZ;

	float pointLight0Val;								//0 is the default directional light, anything else is pointed light
	float light0_amR, light0_amG, light0_amB;			//Values for ambient lighting 0
	float light0_diffR, light0_diffG, light0_diffB;		//Values for diffuse lighting 0
	float light0_specR, light0_specG, light0_specB;		//Values for specular lighting 0
	float dirVec0X, dirVec0Y, dirVec0Z;

	GLfloat spotCut0;						//range from 0-90 or 180(default)
	GLfloat spotExponent0;					//range from 0-128, 0 is default
	float constant0, linear0, quad0;		//for attentuation

	float angle_light1;
	float light1_posX;
	float light1_posY;
	float light1_posZ;
	float pointLight1Val;
	float light1_amR, light1_amG, light1_amB;			//Values for ambient lighting 1
	float light1_diffR, light1_diffG, light1_diffB;		//Values for diffuse lighting 1
	float light1_specR, light1_specG, light1_specB;		//Values for specular lighting 1
	float dirVec1X, dirVec1Y, dirVec1Z;
	GLfloat spotCut1;
	GLfloat spotExponent1;
	float constant1, linear1, quad1; //for attentuation

	float angle_light2;
	float light2_posX;
	float light2_posY;
	float light2_posZ;
	float pointLight2Val;
	float light2_amR, light2_amG, light2_amB;			//Values for ambient lighting 2
	float light2_diffR, light2_diffG, light2_diffB;		//Values for diffuse lighting 2
	float light2_specR, light2_specG, light2_specB;		//Values for specular lighting 2
	float dirVec2X, dirVec2Y, dirVec2Z;
	GLfloat spotCut2;
	GLfloat spotExponent2;
	float constant2, linear2, quad2; //Attenuation 

	float matAmbR, matAmbG, matAmbB;			//Ambient material 
	float matDiffR, matDiffG, matDiffB;			//Diffuse material
	float matSpecR, matSpecG, matSpecB;			//Specular material
	double matShininess;						//Shininess material

private:
	
};