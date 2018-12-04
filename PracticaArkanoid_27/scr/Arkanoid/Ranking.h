#pragma once
#include "Scene.h"
#include <map>
#include <string>

class Ranking :
	public Scene
{
	std::map<std::string,int> PlayersScore;
public:
	Ranking();
	~Ranking();
	void draw();
	void update();
};

