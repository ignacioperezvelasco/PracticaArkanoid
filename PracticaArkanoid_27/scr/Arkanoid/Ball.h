#pragma once
#include "Scene.h"
class Ball
{
private:

public:
	Scene::vector2D position;
	Scene::vector2D direction;
	int lastHittedMe;

	//Methods
	void update();
	void draw();
	Scene::vector2D setNewDirection();
	Ball();
	~Ball();
};

