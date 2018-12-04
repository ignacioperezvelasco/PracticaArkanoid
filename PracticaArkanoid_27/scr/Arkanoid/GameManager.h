#pragma once
#include "Scene.h"
#include "Menu.h"
#include "Play.h"
#include "SplashScreen.h"
#include "Ranking.h"
class GameManager
{	
public:
	Scene *currentScene;
	enum escena 
	{
		MENU,RANKING,PLAY,SPLASHSCREEN,NOCHANGES
	};
	GameManager();
	~GameManager();
	void changeScene(escena nextScene);
	void exit();
	void update();

};

