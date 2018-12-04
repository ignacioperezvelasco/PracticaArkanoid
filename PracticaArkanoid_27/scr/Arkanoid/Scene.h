#pragma once
#include <iostream>
#include <SDL.h>
#include "GameManager.h"

class Scene
{
protected:
	struct Button
	{

	};
	

public:
	struct vector2D
	{
		int x;
		int y;
	};
	Scene();
	~Scene();
	//Virtual methods 
	virtual void draw() = 0;
	virtual GameManager::escena update() = 0;
	//background
	SDL_Rect bg;
	//SDL_Texture texture;

};

