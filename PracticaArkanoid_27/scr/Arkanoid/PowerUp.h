#pragma once
#include <stdio.h>
#include <iostream>
#include <SDL.h>


class PowerUp:
	public Bloque
{
public:
	
	//constructores
	PowerUp();
	PowerUp(IDENTIFICADOR type);
	//destructores
	~PowerUp();
		
	void draw();
	void hanColisionado();

};

