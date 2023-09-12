#include "Proyectil.h"
#include <iostream>
using namespace std;

Proyectil::Proyectil(int x,int al, int an, int vel, int d)
{
	posicionx = x;
	alto = al;
	ancho = an;
	velocidad = vel;
	nivelDano = d;


}


//desde aqui empiezan los geters





int Proyectil::getVelocidad()
{
	return velocidad;
}
int Proyectil::getPosicionx()
{
	return posicionx;
}

int Proyectil::getAlto()
{
	return alto;
}

int Proyectil::getAncho()
{
	return ancho;
}





//termina los geters


int Proyectil::mover()
{
	int posix=getPosicionx();
	return posix = posix + velocidad;
}





