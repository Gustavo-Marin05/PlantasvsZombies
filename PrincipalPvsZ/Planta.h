#pragma once
#include "Actor.h"
class Planta :public Actor
{

private:
	
	int valorDano;
	int valocidadDisparo;

public:
	int nivelVida;


	Planta(int posicionx, int posiciony, int al, int an,int danio);
	Planta();


	//aqui empezaran los geters


	
	int getVelocidadDisparo();
	int getValorDaño();
	


	int crecer(char  tipo, float dim);

	void dibujar(char tipoPlanta) ; 

};


