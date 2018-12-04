#pragma once
#include "Scene.h"
class Play :
	public Scene
{
private:
	void collisionHandler();

public:
	Play();
	~Play();

	void draw();
	GameManager::escena update();
};

