#pragma once

class Planta 
{

private:
	int posicionx;
	int posiciony;
	int alto;
	int ancho;
	int valorDano;
	int valocidadDisparo;

public:
	int nivelVida;


	Planta(int posicionx, int posiciony, int al, int an,int danio);
	/*Planta();*/


	//aqui empezaran los geters


	int getPosicionx();
	int getPosiciony();
	int getAlto();
	int getAncho();
	int getVelocidadDisparo();
	int getValorDaño();
	


	int crecer(char  tipo, float dim);

	
};


