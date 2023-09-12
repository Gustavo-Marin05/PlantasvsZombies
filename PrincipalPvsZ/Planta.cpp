#include "Planta.h"
#include <iostream>
using namespace std;
Planta::Planta(int x, int y, int al, int an,int danio)
{
	posicionx = x;
	posiciony = y;
	alto = al;
	ancho = an;
	valorDano = danio;
}



//estos  son los geters


int Planta::getPosicionx()
{
	return posicionx;
}

int Planta::getPosiciony()
{
	return posiciony;
}

int Planta::getAlto()
{
	return alto;
}

int Planta::getAncho()
{
	return ancho;
}



int Planta::getVelocidadDisparo()
{
	return valocidadDisparo;
}

int Planta::getValorDaño()
{
	return valorDano;
}


//termonando los geters

//empezando las funciones

int Planta::crecer(char tipo, float dim)
{
	
	if (tipo == 'g') {
		return alto = ancho = 3;
	}
	else if (tipo == 'c') {
		return alto = ancho = 5;
	}
	else if (tipo == 'n')
	{
		return alto = ancho = 2;
	}
	else if (tipo == 'gi') {
		return alto = ancho = 1;
	}
	

}



