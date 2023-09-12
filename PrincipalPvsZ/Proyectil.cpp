#include "Proyectil.h"
#include <iostream>
using namespace std;

Proyectil::Proyectil(int x, int y,int al, int an, int vel, int d):Actor(x,y,al,an)
{
	
	velocidad = vel;
	nivelDano = d;


}


//desde aqui empiezan los geters





int Proyectil::getVelocidad()
{
	return velocidad;
}





//termina los geters


int Proyectil::mover()
{
	int posix=getPosicionx();
	return posix = posix + velocidad;
}

void Proyectil::dibujar(char tipoProyectil)
{
	
	if (tipoProyectil == 'h') {
		cout << "  * ********  " << endl;
		cout << "   * ********" << endl;
		cout << "    * ******** " << endl;
		cout << "     * ********" << endl;
		
	}
	else if (tipoProyectil =='g') {
		cout << "       *****" << endl;
		cout << "     ***********" << endl;
		cout << "    *************" << endl;
		cout << "    *************" << endl;
		cout << "     ***********" << endl;
		cout << "        *****" << endl;
	}



}
