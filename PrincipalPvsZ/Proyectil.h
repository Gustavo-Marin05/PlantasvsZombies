#pragma once

class Proyectil
{
private:
	
	int posicionx;
	
	int alto;
	int ancho;
	int velocidad;

public:
	int nivelDano;

	Proyectil(int x, int al, int an, int vel, int d);



	//desde aqui coienzan los geters

	
	int getVelocidad();
	int getPosicionx();
	int getAlto();
	int getAncho();
	
	
	
	//funciones
	int mover();
	


	
};

