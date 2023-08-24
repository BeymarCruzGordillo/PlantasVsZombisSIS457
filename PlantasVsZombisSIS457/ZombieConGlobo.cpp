#include "ZombieConGlobo.h"

//Zombi con globo
//Zombi que ataca por aire sujeta a un globo 
ZombieConGlobo::ZombieConGlobo()
{
	alturaDeVuelo = 2;
	durezaDelGlobo = 10;
}

ZombieConGlobo::ZombieConGlobo(int _alturaDeVuelo, int _durezaDelGlobo)
{
	alturaDeVuelo = _alturaDeVuelo;
	durezaDelGlobo = _durezaDelGlobo;
}

void ZombieConGlobo::moverse() {
	direccionX=1;
	direccionY=3;
	for (int i = 0; i < 10; i++)
	{
		posicionX+=velocidadMovimiento;
		posicionY+=velocidadMovimiento;
	}
}