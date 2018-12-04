#include "SplashScreen.h"



SplashScreen::SplashScreen():
timer {5.0f}
{
}


SplashScreen::~SplashScreen()
{
}


void SplashScreen::draw()
{
}

GameManager::escena SplashScreen::update()
{
	if (timer < 0.f)
	{
		return GameManager::escena::MENU;
	}
	else
	{
		return GameManager::escena::NOCHANGES;
	}
}
