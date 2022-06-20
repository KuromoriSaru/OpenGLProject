
#ifndef __TEXTURE_H__
#define __TEXTURE_H__

#include <iostream>
#include <vector>

// Stores and loads a texture from a *.png into the data array.
struct Texture {
	Texture() {
		this->texture_id = 0u;
		this->width = 0u;
		this->height = 0u;
	}

	bool loadPNG(const char* filename);

	std::vector<unsigned char> data;
	uint32_t texture_id;
	std::string name;
	uint32_t width, height;
};

#endif
