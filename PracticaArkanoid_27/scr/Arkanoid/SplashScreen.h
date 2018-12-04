#pragma once
#include "Scene.h"
#include "GameManager.h"
class SplashScreen :
	public Scene
{
private:
	float timer;
public:
	SplashScreen();
	~SplashScreen();

	void draw();
	GameManager::escena update();
};

