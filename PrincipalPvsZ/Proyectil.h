#pragma once
#include "Actor.h"
class Proyectil: public Actor
{
private:
	
	int velocidad;

public:
	int nivelDano;

	Proyectil(int x,int y, int al, int an, int vel, int d);
	Proyectil(int d);



	//desde aqui coienzan los geters

	
	int getVelocidad();
	
	
	
	//funciones
	int mover();
	void dibujar(char tipoProyectil);


	//crear un funcion que se llame destrozar
	//no hay nescecidad de de que se destruya a nivel codigo solo que se muestre nada mas




};

