#pragma once
#include "Scene.h"
#include <map>
#include <string>

class Ranking :
	public Scene
{
private:
	std::map<std::string,int> PlayersScore;
public:
	Ranking();
	~Ranking();
	void draw();
	GameManager::escena update();
};

