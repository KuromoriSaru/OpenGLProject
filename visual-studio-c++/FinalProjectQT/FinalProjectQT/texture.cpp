#include <GL/freeglut.h>
//#include "lodepng/lodepng.h"
#include "texture.h"

bool Texture::loadPNG(const char* filename)  {
    this->name = filename;
    //unsigned int error = lodepng::decode(this->data, this->width, this->height, filename, LCT_RGBA);
    glGenTextures(1, &this->texture_id);
    glBindTexture(GL_TEXTURE_2D, this->texture_id);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
    glTexImage2D(GL_TEXTURE_2D, 0, 4, this->width, this->height, 0, GL_RGBA, GL_UNSIGNED_BYTE, &this->data[0]);
    gluBuild2DMipmaps(GL_TEXTURE_2D, 4, this->width, this->height, GL_RGBA, GL_UNSIGNED_BYTE, &this->data[0]);
    return true;
}

