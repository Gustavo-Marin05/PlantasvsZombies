#pragma once
#include <iostream>

using namespace std;
class Zombi 
{
private:
	int posicionx;
	int posiciony;
	int alto;
	int ancho;
	int nivelVida;
	int velocidad;
	

public:
	int valorDanio;

	Zombi(int x, int y, int velo);
	
	Zombi(int x, int y, int al, int an, int velo);


	int getPosicionx();
	int getPosiciony();
	int getAlto();
	int getAncho();
	int getVelocidad();
	int avanzar(char direccion);
	void Atacar();
	void ChocarProyectil();
	void dibujar(char tipoZombi);
};

