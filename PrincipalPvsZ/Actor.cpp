#include "Actor.h"
#include <iostream>

Actor::Actor(int x,int y,int al,int an) {
	 posicionx=x;
	 posiciony = y;
	 ancho=al;
	 alto = an;

}

void Actor::dibujar()
{

}


int Actor::getPosicionx() {
	return posicionx;
}

int Actor::getPosiciony() {
	return posiciony;
}

int Actor::getAlto() {
	return alto;
}

int Actor::getAncho() {
	return ancho;
}

