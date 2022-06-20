#include <GL\glew.h>
#include <GL\glut.h>
#include "OpenGL.h"
#include "QViewport.h"
#include "OpenGL.h"
#include "texture.h"
#include "3dsloader.h"	//This specific instance of the 3dsloader isn't the one we use in class, it's from spacesimulator.net 
#include "textfile.h"
#include "string.h"
#include <tchar.h>
#include "tga.h"


#define MAX_VERTICES 8000
#define MAX_POLYGONS 8000

//I used the source code from http://www.spacesimulator.net/tutorials/index.html to read 3ds files, as well as the model/obj/3ds files

//3ds model type obj
obj_type object;

//Variables to read in vertex and fragment shaders
GLint loc;
GLuint v, f, f2, p;

//Files for textures
const char* blend_images[6]{
	"blendial.tga",
	"blendis.tga",
	"blendis2.tga",
	"blendl2.tga",
	"blenglas.tga",
	"blenref.tga"
};

const char* aircyph_images[3]{
	"sidemap1.tga",
	"sidemap2.tga",
	"white.tga"
};

const char* hubble_images[5]{
	"hbltel_1.bmp",
	"hbltel_2.bmp",
	"hbltel_3.bmp",
	"hbltel_4.bmp",
	"hbltel_w.bmp"
};

//As per what was shown in the spacesimulator.net references, these are constants needed for the cubemap.
#ifndef GL_EXT_texture_cube_map
# define GL_NORMAL_MAP_EXT                   0x8511
# define GL_REFLECTION_MAP_EXT               0x8512
# define GL_TEXTURE_CUBE_MAP_EXT             0x8513
# define GL_TEXTURE_BINDING_CUBE_MAP_EXT     0x8514
# define GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT  0x8515
# define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT  0x8516
# define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT  0x8517
# define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT  0x8518
# define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT  0x8519
# define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT  0x851A
# define GL_PROXY_TEXTURE_CUBE_MAP_EXT       0x851B
# define GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT    0x851C
#endif

//Cubemap face targets
static GLenum targets[6] = {
  GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT,
  GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT,
  GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT,
  GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT,
  GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT,
  GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT
};

bool mipmaps = true;
int cube_map_mode = GL_NORMAL_MAP_EXT;
int wrap = GL_REPEAT;
int textureVal = -1; //Used to bind texture

//Functions needed to load the .tga textures
void QViewport::loadMap(GLenum target, char* filename) {
	//FILE* file;
	//int num_texture = 0;
	//gliGenericImage* image;

	//file = fopen(filename, "rb");
	//if (file == NULL) exit(-1);

	//image = gliReadTGA(file, filename);
	//fclose(file);

	//num_texture++;

	//glBindTexture(GL_TEXTURE_2D, num_texture); // Bind the ID texture specified by the 2nd parameter

	//updateWrap();

	//if (mipmaps == true) {
		//glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);
		//glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	//}
	//else {
		//glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		//glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	//}

	//glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE); // We don't combine the color with the original surface color, use only the texture map.

	//if (mipmaps == true) {
		//glTexImage2D(GL_TEXTURE_2D, 0, image->components, image->width, image->height, 0, image->format, GL_UNSIGNED_BYTE, image->pixels);
		//gluBuild2DMipmaps(GL_TEXTURE_2D, image->components, image->width, image->height, image->format, GL_UNSIGNED_BYTE, image->pixels);
	//}

}

void QViewport::updateWrap() {
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrap);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrap);
}

void QViewport::constructMap(char* filenames[], int arraySize) { 
	//for (int i = 0; i < arraySize; i++)
		//loadMap(targets[i], filenames[i]); //Changes the different types of maps that may need to be updated. 
}



QViewport::QViewport(QWidget* parent) : QOpenGLWidget(parent) {
	//Initialize all of our variables
	this->timer = 0;

	this->modelName = (char *)"spaceship.3ds";

	this->changeMap = 0;

	this->textureOn = false;

	this->light0 = true;
	this->light1 = true;
	this->light2 = true;

	this->shaderType = 0;

	this->camPosX = 0.0f;
	this->camPosY = 0.0f;
	this->camPosZ = -120.0f;

	this->camRotX = 0;
	this->camRotY = 0;
	this->camRotZ = 0;

	this->camLookX = 0;
	this->camLookY = 0;
	this->camLookZ = 0;

	this->lightControl = 0; //0 = light0, 1 = light1, 2 = light2 (for controlling light properties)

	this->angle_light0 = 7.0f;
	this->light0_posX = 100.0f;
	this->light0_posY = 0.0f;
	this->light0_posZ = -50.0f;
	this->pointLight0Val = 0.0f;
	this->light0_amR = 0.1f;
	this->light0_amG = 0.2f;
	this->light0_amB = 0.4f;
	this->light0_diffR = 0.1f;
	this->light0_diffG = 0.2f;
	this->light0_diffB = 0.8f;
	this->light0_specR = 0.0f;
	this->light0_specG = 0.0f;
	this->light0_specB = 1.0f;
	this->dirVec0X = 0.0f;
	this->dirVec0Y = -1.0f;
	this->dirVec0Z = 0.0f;
	this->spotCut0 = 180;
	this->spotExponent0 = 0;
	this->constant0 = 1.0;
	this->linear0 = 0.0;
	this->quad0 = 0.0;

	this->angle_light1 = 7.0f;
	this->light1_posX = -100.0f;
	this->light1_posY = 0.0f;
	this->light1_posZ = 3.0f;
	this->pointLight1Val = 0.0f;
	this->light1_amR = 0.4f;
	this->light1_amG = 0.2f;
	this->light1_amB = 0.1f;
	this->light1_diffR = 0.8f;
	this->light1_diffG = 0.2f;
	this->light1_diffB = 0.1f;
	this->light1_specR = 1.0f;
	this->light1_specG = 0.0f;
	this->light1_specB = 0.0f;
	this->dirVec1X = 1.0f;
	this->dirVec1Y = 0.0f;
	this->dirVec1Z = 0.0f;
	this->spotCut1 = 180;
	this->spotExponent1 = 0;
	this->constant1 = 1.0;
	this->linear1 = 0.0;
	this->quad1 = 0.0;

	this->angle_light2 = 7.0f;
	this->light2_posX = 3.0f;
	this->light2_posY = 100.0f;
	this->light2_posZ = 3.0f;
	this->pointLight2Val = 0.0f;
	this->light2_amR = 0.1f;
	this->light2_amG = 0.4f;
	this->light2_amB = 0.1f;
	this->light2_diffR = 0.1f;
	this->light2_diffG = 0.8f;
	this->light2_diffB = 0.1f;
	this->light2_specR = 0.0f;
	this->light2_specG = 1.0f;
	this->light2_specB = 0.0f;
	this->dirVec2X = 1.0f;
	this->dirVec2Y = 0.0f;
	this->dirVec2Z = 0.0f;
	this->spotCut2 = 180;
	this->spotExponent2 = 0;
	this->constant2 = 1.0;
	this->linear2 = 0.0;
	this->quad2 = 0.0;

	this->matAmbR = 0.5f;
	this->matAmbG = 0.5f;
	this->matAmbB = 0.5f;
	this->matDiffR = 0.5f;
	this->matDiffG = 0.5f;
	this->matDiffB = 0.5f;
	this->matSpecR = 1.0f;
	this->matSpecG = 1.0f;
	this->matSpecB = 1.0f;
	this->matShininess = 25.0f;
}

QViewport::~QViewport() {}

void QViewport::setLightsMat() {
	//This is where we setup our light and material specs
	glDisable(GL_LIGHTING);
	glDisable(GL_LIGHT0);
	glDisable(GL_LIGHT1);
	glDisable(GL_LIGHT2);

	glPointSize(20.0f);

	//Light0 variables and information
	GLfloat light0_pos[] = { this->light0_posX * cos(this->angle_light0), this->light0_posY, this->light0_posZ * sin(this->angle_light0), this->pointLight0Val };
	GLfloat light0_ambient[] = { this->light0_amR, this->light0_amG, this->light0_amB, 1.0f };
	GLfloat light0_diffuse[] = { this->light0_diffR, this->light0_diffG, this->light0_diffB, 1.0f };
	GLfloat light0_specular[] = { this->light0_specR, this->light0_specG, this->light0_specB, 1.0f };
	GLfloat dirVector0[] = { this->dirVec0X, this->dirVec0Y, this->dirVec0Z }; //Direction of the spotlight (type of point light**(correct meaning))
	GLfloat light0_atten[] = { this->constant0, this->linear0, this->quad0 }; //The first value is constant attenuation, linear, and then quadratic

	//Light 1 information
	GLfloat light1_pos[] = { this->light1_posX * cos(this->angle_light1), this->light1_posY, this->light1_posZ * sin(this->angle_light1), this->pointLight1Val };
	GLfloat light1_ambient[] = { this->light1_amR, this->light1_amG, this->light1_amB, 1.0f };
	GLfloat light1_diffuse[] = { this->light1_diffR, this->light1_diffG, this->light1_diffB, 1.0f };
	GLfloat light1_specular[] = { this->light1_specR, this->light1_specG, this->light1_specB, 1.0f };
	GLfloat dirVector1[] = { this->dirVec1X, this->dirVec1Y, this->dirVec1Z }; //Direction of the spotlight (type of point light**(correct meaning))
	GLfloat light1_atten[] = { this->constant1, this->linear1, this->quad1 }; //The first value is constant attenuation, linear, and then quadratic

	//Light 2 information
	GLfloat light2_pos[] = { this->light2_posX * cos(this->angle_light2), this->light2_posY, this->light2_posZ * sin(this->angle_light2), this->pointLight2Val };
	GLfloat light2_ambient[] = { this->light2_amR, this->light2_amG, this->light2_amB, 1.0f };
	GLfloat light2_diffuse[] = { this->light2_diffR, this->light2_diffG, this->light2_diffB, 1.0f };
	GLfloat light2_specular[] = { this->light2_specR, this->light2_specG, this->light2_specB, 1.0f };
	GLfloat dirVector2[] = { this->dirVec2X, this->dirVec2Y, this->dirVec2Z }; //Direction of the spotlight (type of point light**(correct meaning))
	GLfloat light2_atten[] = { this->constant2, this->linear2, this->quad2 }; //The first value is constant attenuation, linear, and then quadratic

	//Material variables, and how they react to the light and light type upon them
	GLfloat mat_specular[] = { this->matSpecR, this->matSpecG, this->matSpecB, 1.0 };
	GLfloat mat_ambient[] = { this->matAmbR, this->matAmbG, this->matAmbB, 1.0 };
	GLfloat mat_diffuse[] = { this->matDiffR, this->matDiffG, this->matDiffB, 1.0 };
	GLfloat mat_shininess[] = { this->matShininess }; //Value determined by b/w 0-128
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 1.0 };

	glLightfv(GL_LIGHT0, GL_POSITION, light0_pos); 
	glLightfv(GL_LIGHT0, GL_AMBIENT, light0_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light0_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light0_specular);
	glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION, light0_atten[0]);
	glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, light0_atten[1]);
	glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, light0_atten[2]);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, dirVector0);
	glLightf(GL_LIGHT0, GL_SPOT_CUTOFF, this->spotCut0);
	glLightf(GL_LIGHT0, GL_SPOT_EXPONENT, this->spotExponent0);

	glLightfv(GL_LIGHT1, GL_POSITION, light1_pos);
	glLightfv(GL_LIGHT1, GL_AMBIENT, light1_ambient);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, light1_diffuse);
	glLightfv(GL_LIGHT1, GL_SPECULAR, light1_specular);
	glLightf(GL_LIGHT1, GL_CONSTANT_ATTENUATION, light1_atten[0]);
	glLightf(GL_LIGHT1, GL_LINEAR_ATTENUATION, light1_atten[1]);
	glLightf(GL_LIGHT1, GL_QUADRATIC_ATTENUATION, light1_atten[2]);
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, dirVector1);
	glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, this->spotCut1);
	glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, this->spotExponent1);

	glLightfv(GL_LIGHT2, GL_POSITION, light2_pos);
	glLightfv(GL_LIGHT2, GL_AMBIENT, light2_ambient);
	glLightfv(GL_LIGHT2, GL_DIFFUSE, light2_diffuse);
	glLightfv(GL_LIGHT2, GL_SPECULAR, light2_specular);
	glLightf(GL_LIGHT2, GL_CONSTANT_ATTENUATION, light2_atten[0]);
	glLightf(GL_LIGHT2, GL_LINEAR_ATTENUATION, light2_atten[1]);
	glLightf(GL_LIGHT2, GL_QUADRATIC_ATTENUATION, light2_atten[2]);
	glLightfv(GL_LIGHT2, GL_SPOT_DIRECTION, dirVector2);
	glLightf(GL_LIGHT2, GL_SPOT_CUTOFF, this->spotCut2);
	glLightf(GL_LIGHT2, GL_SPOT_EXPONENT, this->spotExponent2);

	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);

	//Lights will then be drawn here:
	glBegin(GL_POINTS);
	glColor3f(light0_diffuse[0], light0_diffuse[1], light0_diffuse[2]);
	glVertex3f(light0_pos[0], light0_pos[1], light0_pos[2]);
	glColor3f(light1_diffuse[0], light1_diffuse[1], light1_diffuse[2]);
	glVertex3f(light1_pos[0], light1_pos[1], light1_pos[2]);
	glColor3f(light2_diffuse[0], light2_diffuse[1], light2_diffuse[2]);
	glVertex3f(light2_pos[0], light2_pos[1], light2_pos[2]);
	glEnd();
}

void QViewport::printShaderInfoLog(GLuint obj)
{
	int infologLength = 0;
	int charsWritten = 0;
	char* infoLog;

	glGetShaderiv(obj, GL_INFO_LOG_LENGTH, &infologLength);

	if (infologLength > 0)
	{
		infoLog = (char*)malloc(infologLength);
		glGetShaderInfoLog(obj, infologLength, &charsWritten, infoLog);
		printf("%s\n", infoLog);
		free(infoLog);
	}
}

void QViewport::printProgramInfoLog(GLuint obj)
{
	int infologLength = 0;
	int charsWritten = 0;
	char* infoLog;

	glGetProgramiv(obj, GL_INFO_LOG_LENGTH, &infologLength);

	if (infologLength > 0)
	{
		infoLog = (char*)malloc(infologLength);
		glGetProgramInfoLog(obj, infologLength, &charsWritten, infoLog);
		printf("%s\n", infoLog);
		free(infoLog);
	}
}

void QViewport::setShaders(char* vert, char* frag) {
	char* vs = NULL, * fs = NULL, * fs2 = NULL;

	v = glCreateShader(GL_VERTEX_SHADER);
	f = glCreateShader(GL_FRAGMENT_SHADER);
	f2 = glCreateShader(GL_FRAGMENT_SHADER);

	vs = textFileRead(vert);
	fs = textFileRead(frag);

	const char* vv = vs;
	const char* ff = fs;

	glShaderSource(v, 1, &vv, NULL);
	glShaderSource(f, 1, &ff, NULL);

	free(vs); free(fs);

	glCompileShader(v);
	glCompileShader(f);

	printShaderInfoLog(v);
	printShaderInfoLog(f);
	printShaderInfoLog(f2);

	p = glCreateProgram();
	glAttachShader(p, v);
	glAttachShader(p, f);

	glLinkProgram(p);
	printProgramInfoLog(p);

	glUseProgram(p);
	loc = glGetUniformLocation(p, "time");
}

void QViewport::detachShaders() {

	glUseProgram(0);

}

void QViewport::initializeGL() {
	glClearColor(0.0, 0.0, 0.0, 0.0); // Set the background to clear and black
	glShadeModel(GL_SMOOTH); // Shademodel will be smooth

	glEnable(GL_DEPTH_TEST); // Enable depth_test/zbuffer
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); // Polygon rasterization mode (polygon filled)

	object.id_texture = (int)LoadBitmap(GetModuleHandle(NULL), _T("spaceshiptexture.bmp")); //Texture route 
	glEnable(GL_TEXTURE_2D); //Enables texture mapping 

	//Enable lights
	glEnable(GL_LIGHTING);

	glewInit(); //Activate the shaders 
}


void QViewport::paintGL() {

	//Displays console in addition to the UI

	//Load our model
	Load3DS(&object, this->modelName);

	//Disable our shaders, they should not be turned on upon Init
	detachShaders();

	//Shaders are set here, and can be changed via menu option 
	if (this->shaderType == 1) {
		setShaders((char*)"normal.vert", (char*)"normal.frag");
	}
	else if (this->shaderType == 2) {
		setShaders((char*)"perPixel.vert", (char*)"perPixel.frag");
	}
	else if (this->shaderType == 3) {
		setShaders((char*)"phong.vert", (char*)"phong.frag");
	}
	else if (this->shaderType == 4) {
		setShaders((char*)"toonf2.vert", (char*)"toonf2.frag");
	}
	else if (this->shaderType == 5) {
		setShaders((char*)"custom1.vert", (char*)"custom1.frag");
	}
	else if (this->shaderType == 6) {
		setShaders((char*)"custom2.vert", (char*)"custom2.frag");
		//Animation timer will be incremented
		glUniform1f(loc, this->timer);
	}

	int l_index;

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //Clear our background color 
	glMatrixMode(GL_MODELVIEW); //Model transformations
	glLoadIdentity(); //Initialize model identity

	gluLookAt(this->camPosX, this->camPosY, this->camPosZ, this->camLookX, this->camLookY, this->camLookZ, 0.0f, 1.0f, 0.0f); //These will be changed for camera panning/zooming, etc. 

	glDisable(GL_TEXTURE_2D);

	//set up lights
	setLightsMat();

	glEnable(GL_LIGHTING);
	//enable lights based on user input
	if (this->light0 == true) {
		glEnable(GL_LIGHT0);
	}
	if (this->light1 == true) {
		glEnable(GL_LIGHT1);
	}
	if (this->light2 == true) {
		glEnable(GL_LIGHT2);
	}

	//Texture loading, this will check if it is .tga or .bmp 
	//Doesn't work past the first texture, so I've commented everything else out 
	if (this->textureOn == true) {
		switch (this->changeMap) {
		case 0:
			glEnable(GL_TEXTURE_2D);
			//glTranslatef(0.0f, 0.0f, -400.0f);
			break;
		case 1:
			//constructMap(blend_images, 6);
			//glTranslatef(0.0f, 0.0f, -50.0f);
			break;
		case 2:
			//constructMap(aircyph_images, 3); //figure out how to load tga images later (done!)
			//glTranslatef(0.0f, 0.0f, -200.0f);
			break;
		case 3:
			/*object.id_texture = LoadBitmap(hubble_images[0]);
			glEnable(GL_TEXTURE_2D);*/
			/*for (int i = 0; i < 5; ++i) {
				object.id_texture = LoadBitmap(hubble_images[i]);
			}*/
			//glTranslatef(0.0f, 0.0f, -950.0f);
			break;
		case 4:
			//glTranslatef(0.0f, -10.0f, -350.0f);
			break;
		case 5:
			//glTranslatef(0.0f, 0.0f, -10.0f);
			break;
		case 6:
			//glTranslatef(0.0f, 0.0f, -25.0f);
			break;
		case 7:
			//glTranslatef(0.0f, 0.0f, -50.0f);
			break;
		case 8:
			//glTranslatef(0.0f, 0.0f, -350.0f);
			break;
		default:
			exit(-1);
			break;
		}
	}

	//Model rotations
	glRotatef(this->camRotX, 1, 0, 0); //X axis
	glRotatef(this->camRotY, 0, 1, 0); //Y axis
	glRotatef(this->camRotZ, 0, 0, 1); //Z axis

	//glBindTexture(GL_TEXTURE_2D, object.id_texture);

	vertex_type v1, v2, v3, U, V;
	float nx, ny, nz;
	glBegin(GL_TRIANGLES); //glBegin and glEnd delimit the vertices that define a primitive (in our case triangles)
	for (l_index = 0; l_index < object.polygons_qty; l_index++)
	{
		//Calculating Normals, method taken from: https://www.khronos.org/opengl/wiki/Calculating_a_Surface_Normal
		v1 = object.vertex[object.polygon[l_index].a];
		v2 = object.vertex[object.polygon[l_index].b];
		v3 = object.vertex[object.polygon[l_index].c];

		U.x = v2.x - v1.x; //V2 - V1
		U.y = v2.y - v1.y;
		U.z = v2.z - v1.z;
		V.x = v3.x - v1.x; //V3 - V1
		V.y = v3.y - v1.y;
		V.z = v3.z - v1.z;

		nx = (U.y * V.z) - (U.z * V.y);
		ny = (U.z * V.x) - (U.x * V.z);
		nz = (U.x * V.y) - (U.y * V.x);

		//FIRST VERTEX-------------------------------------------
		//Texture coordinates of the first vertex
		glTexCoord2f(object.mapcoord[object.polygon[l_index].a].u,
			object.mapcoord[object.polygon[l_index].a].v);
		//Draw vertex normals
		glNormal3f(nx, ny, nz);
		//Coordinates of the first vertex
		glVertex3f(object.vertex[object.polygon[l_index].a].x,
			object.vertex[object.polygon[l_index].a].y,
			object.vertex[object.polygon[l_index].a].z); //Vertex definition

		//SECOND VERTEX-----------------------------------------
		//Texture coordinates of the second vertex
		glTexCoord2f(object.mapcoord[object.polygon[l_index].b].u,
			object.mapcoord[object.polygon[l_index].b].v);
		//Draw vertex normals
		glNormal3f(nx, ny, nz);
		//Coordinates of the second vertex
		glVertex3f(object.vertex[object.polygon[l_index].b].x,
			object.vertex[object.polygon[l_index].b].y,
			object.vertex[object.polygon[l_index].b].z);

		//THIRD VERTEX ----------------------------------------
		//Texture coordinates of the third vertex
		glTexCoord2f(object.mapcoord[object.polygon[l_index].c].u,
			object.mapcoord[object.polygon[l_index].c].v);
		//Draw vertex normals
		glNormal3f(nx, ny, nz);
		//Coordinates of the Third vertex
		glVertex3f(object.vertex[object.polygon[l_index].c].x,
			object.vertex[object.polygon[l_index].c].y,
			object.vertex[object.polygon[l_index].c].z);
	}
	glEnd();
}


void QViewport::resizeGL(int width, int height) {
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(95.0, float(width) / float(height), 0.01, 100.0f);
	glMatrixMode(GL_MODELVIEW);
}