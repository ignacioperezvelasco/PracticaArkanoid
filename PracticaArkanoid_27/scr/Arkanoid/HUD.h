#pragma once
#include "Scene.h"
class HUD
{
private:
	int player1Hp, player2Hp, player1Score, player2Score;
	Scene::vector2D positionScores[2];
	Scene::vector2D positionHealths[2];
	//SDL_Texture texture{};
public:
	HUD();
	~HUD();
	void draw();
	void setPlayer1Score(int score);
	void setPlayer2Score(int score);
	void setPlayer1Health(int health);
	void setPlayer2Health(int health);

};

