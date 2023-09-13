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
		 
		 posiy++;
		
	}
	else if (direccion == 's' || direccion == 'S') {
		 posiy--;
	}
	else if (direccion == 'e' || direccion == 'E') {
		 posix --;

	}
	else if (direccion == 'o' || direccion == 'O') {
		posix++;
	}

	setPosiciony(posiy);
	setPosicionx(posix);

	return posix, posiy;
	
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



//en esta clase vamos a implementar estas funciones 



void Zombi::Colicionar(Proyectil *p1)
{
	//quitar al nivel de vida el zombi el nivel de daño que tien el proyectil
	
	
	
	
	
	
	
	//detener el proyectil 



	// al ultimo revisar si el zombi esta muerto
	//eso ver en el principal
	// Planta p1;
	//Zombie z1;
	//Proyectil *por1=p1.disparar();
	//z1.colicionar(pro1)

	//o tambien esto z1.colicionar(p1.disparar());  esta es la manera mas directa

	//considerar un constructor que permita considerar el tipo de planta
	//considerar que la planta va a colicionar con el zombi






	//mostar el nivel de vida


}




