#pragma once
#include "Scene.h"
#include "PowerUp.h"
class Player
{
private:
	Scene::vector2D position;
	int score;
	int size;
	PowerUp powerUps;

	void move();
public:
	Player();
	~Player();

	//getters
	Scene::vector2D getPosition();
	int getScore();
	void getPowerUp();
};

