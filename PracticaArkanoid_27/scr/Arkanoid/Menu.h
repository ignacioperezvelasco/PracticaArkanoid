#pragma once
#include "Scene.h"
class Menu :
	public Scene
{
private:
	Button play;
	Button ranking;
	Button exit;
public:
	Menu();
	~Menu();
	
	void draw();
	GameManager::escena update();
};

