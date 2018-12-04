#pragma once
#include <SDL.h>
#include "Bloque.h"
const int MAPSIZEX = 10;
const int MAPSIZEY = 10;
class Map
{
private:
	
	//SDL_Texture textures[];

public:
	Map();
	~Map();
	Bloque *gridMap[MAPSIZEX][MAPSIZEY];
	
	void draw();
	void update();
};

