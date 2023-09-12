#include "Zombi.h"

//Zombi::Zombi(int x, int y, int velo):Actor(x,y)
//{
//	posicionx = x;
//	posiciony = y;
//	velocidad = velo;
//	valorDanio = 55;
//
//}


Zombi::Zombi(int x, int y, int al, int an, int velo):Actor(x,y,al,an)
{
	/*posicionx = x;
	posiciony = y;
	alto = al;
	ancho = an;*/
	velocidad = velo;
	valorDanio = 25;
}


//desde aqui empiza los geters


int Zombi::getVelocidad()
{
	return velocidad;
}

//aqui termina los geters

//estas son las funcionalidades

int Zombi::avanzar(char direccion) {

	int posiy = getPosiciony();
	int posix=getPosicionx();

	if (direccion == 'n' || direccion == 'N') {
		 
		return posiy+1;
	}
	else if (direccion == 's' || direccion == 'S') {
		return posiy=posiy -1;
	}
	else if (direccion == 'e' || direccion == 'E') {
		return posix=posix - 1;

	}
	else if (direccion == 'o' || direccion == 'O') {
		return posix=posix+ 1;
	}

}

void Zombi::dibujar(char tipoZombi)
{
	if (tipoZombi == 'g') {
		cout << "          ****" << endl;
		cout << "          ****" << endl;
		cout << "          ****" << endl;
		cout << "           **" << endl;
		cout << "      ************" << endl;
		cout << "      ************  " << endl;
		cout << "      **   ***  **" << endl;
		cout << "           ***" << endl;
		cout << "           ***" << endl;
		cout << "         *******" << endl;
		cout << "         *******" << endl;



	}
	else if (tipoZombi == 'n') {
		cout << "    ***" << endl;
		cout << "    ***" << endl;
		cout << "     *" << endl;
		cout << "  *******  " << endl;
		cout << "  *  *  *" << endl;
		cout << "     *" << endl;
		cout << "     *" << endl;
		cout << "    ***" << endl;
		cout << "" << endl;
	}
	else if (tipoZombi == 'c') {
		cout << "     *" << endl;
		cout << "   *****" << endl;
		cout << "   * * *" << endl;
		cout << "     *" << endl;
		cout << "    *** " << endl;
	}

}




