#pragma once
#include <iostream>
#include "Actor.h"
#include "Proyectil.h"
using namespace std;
class Zombi :public Actor 
{
private:
	
	int nivelVida;
	int velocidad;
	

public:
	int valorDanio;

	
	Zombi(int , int , int , int , int);


	
	int getVelocidad();
	int avanzar(char direccion);
	void Atacar();
	void ChocarProyectil();
	void dibujar(char tipoZombi);
	void Colicionar(Proyectil *p1);



};

