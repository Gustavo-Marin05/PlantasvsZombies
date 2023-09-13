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
	Actor();

	
	//estos son los geters de la clase padre
	//tambien se estan implementando en las clases hijas
	int getPosicionx();
	void setPosicionx(int x);
	int getPosiciony();
	void setPosiciony(int y);
	int getAlto();
	void setAlto(int al);
	int getAncho();
	void setAncho(int an);


	//por sia acaso se quiera modificar algo 

	 void dibujar();

	
};

