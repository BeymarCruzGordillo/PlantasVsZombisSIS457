#include "ZombieColgado.h"
//zombi Colgado
//Zombi que cuelga de una cuerda y secuestra plantas 
ZombieColgado::ZombieColgado()
{
	alturaTierra = 2;
}

ZombieColgado::ZombieColgado(int _alturaTierra)
{
	alturaTierra = _alturaTierra;
}

void ZombieColgado::colgarse() {
	cout << "Zombi colgandose" << endl;
		
}

void ZombieColgado::secuestrarPlanta() {
		cout << "Zombi secuestrando planta" << endl;
}

void ZombieColgado::moverse() {
	direccionX=1;
	direccionY=2;
	for (int i=0; i<5; i++)
	{
		posicionY+=direccionY;
	}
}