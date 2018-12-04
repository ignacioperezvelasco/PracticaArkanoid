#pragma once
#include "Scene.h"
class SplashScreen :
	public Scene
{
private:
	float timer;
public:
	SplashScreen();
	~SplashScreen();

	void countDown();

	void draw();
	void update();
};

