#include "Zombi.h"
#include <iostream>
#include "Planta.h"
#include "Proyectil.h"
#include"Actor.h"
using namespace std;
//void mostrarDatos(Zombi z1)
//{
//    cout << z1.getPosicionx() << endl;
//    cout << z1.getPosiciony() << endl;
//    cout << z1.getVelocidad() << endl;
//    cout << z1.valorDanio << endl;
//}
void mostrar2(Zombi z2) {
    cout << z2.getPosicionx() << endl;
    cout << z2.getPosiciony() << endl;
    cout << z2.getAlto() << endl;
    cout << z2.getAncho() << endl;
    cout << z2.getVelocidad() << endl;
    cout << z2.valorDanio << endl;
}


void mostrarDatosPlanta(Planta p1) {
    cout << p1.getPosicionx() << endl;
    cout << p1.getPosiciony() << endl;
    cout << p1.getAlto() << endl;
    cout << p1.getAncho() << endl;
    cout << p1.getValorDaño() << endl;

}



void  mostrarDatosProyectil(Proyectil pr) {
    cout << pr.getPosicionx() << endl;
    cout << pr.getAlto() << endl;
    cout << pr.getAncho() << endl;
    cout << pr.getVelocidad();
}
int main()
{
   /* Zombi z1(5, 2, 3);*/
    Zombi z2(0, 0, 70, 70, 5);

    char direccion;
    char tipoZombi;
    cout << "ingrese una direccion (N,S,E,O)" << endl;
    cin >> direccion;
   /* z1.avanzar(direccion);*/
    z2.avanzar(direccion);
    cout << "datos de z1" << endl;
   /* mostrarDatos(z1);*/




    cout << "datos de z2" << endl;
    mostrar2(z2);
    z2.dibujar('g');


    //desde aqui comienza todo de la planta
    Planta p1(2, 3, 5, 5,6);
    char tipo;
    cout << "ingrese la planta g,c,n,gi" << endl;
    cin >> tipo;
    p1.crecer(tipo,1);
    cout << "datos de la planta" << endl;
    mostrarDatosPlanta(p1);
    p1.dibujar('g');



    //desde aqui comienza todo sobre  lo del proyectil no esta en funcion de que tipo de planta 
    //esta lanzara los proyectiles

    Proyectil pr(2,0, 2, 2, 3, 500);
    pr.mover();
    cout << "datos del proyectil" << endl;
    mostrarDatosProyectil(pr);
    pr.dibujar('g');

    return 0;
}

