#include "Zombi.h"

Zombi::Zombi(int x, int y, int velo)
{
	posicionx = x;
	posiciony = y;
	velocidad = velo;
	valorDanio = 55;

}


Zombi::Zombi(int x, int y, int al, int an, int velo)
{
	posicionx = x;
	posiciony = y;
	alto = al;
	ancho = an;
	velocidad = velo;
	valorDanio = 25;
}




//desde aqui empiza los geters


int Zombi::getPosicionx()
{
	return posicionx;
}

int Zombi::getPosiciony()
{
	return posiciony;
}

int Zombi::getAlto()
{
	return alto;
}

int Zombi::getAncho()
{
	return ancho;
}


int Zombi::getVelocidad()
{
	return velocidad;
}

//aqui termina los geters

//estas son las funcionalidades

int Zombi::avanzar(char direccion) {

	

	if (direccion == 'n' || direccion == 'N') {
		 
		return posiciony=posiciony+1;
	}
	else if (direccion == 's' || direccion == 'S') {
		return posiciony=posiciony -1;
	}
	else if (direccion == 'e' || direccion == 'E') {
		return posicionx=posicionx - 1;

	}
	else if (direccion == 'o' || direccion == 'O') {
		return posicionx=posicionx+ 1;
	}

}



