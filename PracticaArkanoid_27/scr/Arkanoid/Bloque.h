#pragma once
#include "Map.h"
#include "Play.h"
class Bloque
{
private:
	
public:
	enum IDENTIFICADOR
	{
		POWERUP,BLOQUEIRROMPIBLE,BLOQUE, BLOQUEMEDIOROTO, BLOQUEROTO
	};

	//atributos
	IDENTIFICADOR tipo;
	SDL_Rect position;
	//SDL_Texture text;
	
	//Metodos virtuales
	virtual void draw()=0;
	virtual void hanColisionado()=0;
	//getters
	virtual Scene::vector2D getPosicion();
	virtual IDENTIFICADOR getIdentificador();


	Bloque();
	~Bloque();
};

