#include "Planta.h"
#include <iostream>
using namespace std;
Planta::Planta(int x, int y, int al, int an,int danio):Actor(x,y,al,an)
{
	valorDano = danio;
}



//estos  son los geters


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
	int alto=getAlto();
	int ancho=getAncho();
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

void Planta::dibujar(char tipoPlanta)
{

	if (tipoPlanta == 'g') {
		cout << "         **" << endl;
		cout << "       *******   **" << endl;
		cout << "      *************" << endl;
		cout << "      *************" << endl;
		cout << "       *******   **" << endl;
		cout << "          *" << endl;
		cout << "          *" << endl;
		cout << "   *  *   *  *  *" << endl;
		cout << "      * **** *" << endl;
		

	}
	else if (tipoPlanta == 'G') {
		cout << "      " << endl;
		cout << "        *  *  * " << endl;
		cout << "      *  *****  *" << endl;
		cout << "      *  *****  *" << endl;
		cout << "      *  *****  *" << endl;
		cout << "        *  *  *" << endl;
		cout << "           *" << endl;
		cout << "           * " << endl;
		cout << "     * *   *   * *" << endl;
		cout << "       *  ***  *" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
	}
}


