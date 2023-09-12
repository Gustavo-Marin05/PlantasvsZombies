#pragma once
class Actor
{
private:
	int posicionx;
	int posiciony;
	int alto;
	int ancho;

public:

	Actor(int x, int y, int al, int an);

	
	//estos son los geters de la clase padre
	//tambien se estan implementando en las clases hijas
	int getPosicionx();
	int getPosiciony();
	int getAlto();
	int getAncho();

	//por sia acaso se quiera modificar algo 

	 void dibujar();

	
};

