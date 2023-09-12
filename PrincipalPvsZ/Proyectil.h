#pragma once
#include "Actor.h"
class Proyectil: public Actor
{
private:
	
	int velocidad;

public:
	int nivelDano;

	Proyectil(int x,int y, int al, int an, int vel, int d);



	//desde aqui coienzan los geters

	
	int getVelocidad();
	
	
	
	//funciones
	int mover();
	void dibujar(char tipoProyectil);

};

