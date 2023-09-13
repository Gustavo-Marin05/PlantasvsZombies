#pragma once
#include "Actor.h"
#include "Proyectil.h"


enum TipoPlanta
{
	guisante, Carnivora,kactus
};
class Planta :public Actor
{

private:
	
	int valorDano;
	int valocidadDisparo;

public:


	TipoPlanta tipo;


	int nivelVida;


	Planta(int posicionx, int posiciony, int al, int an,int danio);
	Planta();


	//aqui empezaran los geters


	
	int getVelocidadDisparo();
	int getValorDa�o();
	


	int crecer(char  tipo, float dim);

	void dibujar(char tipoPlanta) ; 

	//creamos una funcion disparar para que pueda interactuar con el proyectil

	Proyectil* disparar();





	~Planta();  

};


