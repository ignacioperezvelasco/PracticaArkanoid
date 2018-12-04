#pragma once
#include "Bloque.h"
class BloqueNormal :
	public Bloque
{
private:
	/*
	SDLText texturaSolido;
	SDLText texturaNormal;
	SDLText texturaMedioRoto;
	SDLText texturaRoto;
	*/
public:
	BloqueNormal();
	BloqueNormal(IDENTIFICADOR tipo);
	~BloqueNormal();

	void draw();
	void hanColisionado();
};

