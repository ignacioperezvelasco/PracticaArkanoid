#include "GameManager.h"



GameManager::GameManager():
	currentScene{new SplashScreen}
{
}


GameManager::~GameManager()
{
}

void GameManager::changeScene(escena nextScene)
{
	switch (nextScene)
	{
	case MENU:
		currentScene = new Menu;
		break;
	case PLAY:
		currentScene = new Play;
		break;
	case SPLASHSCREEN:
		currentScene = new SplashScreen;
		break;
	case RANKING:
		currentScene = new Ranking;
		break;
	default:
		break;
	}
}

void GameManager::exit()
{
}

void GameManager::update()
{
	if (currentScene->update() != escena::NOCHANGES)
	{
		changeScene(currentScene->update());
	}
}