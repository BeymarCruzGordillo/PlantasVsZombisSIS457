#include "ZombieDisco.h"
//zombi Disco
//zombi que baila e invoca zombis

ZombieDisco::ZombieDisco()
{
	cantidadZombisInvocadas = 4;
	nivelDestrezaBaile = 8;
}
ZombieDisco::ZombieDisco(int _velocidadBaile, int _cantidadZombisInvocadas)
{
	cantidadZombisInvocadas = _velocidadBaile;
	nivelDestrezaBaile = _cantidadZombisInvocadas;
}

void ZombieDisco::moverse() {
	direccionX=3;
	direccionY=2;
	for (int i = 0; i < 3; i++)
	{
		posicionX+=1;
		posicionX-=1;
		posicionY+=1;
		posicionY-=1;
	}
	for (int i = 0; i < 7; i++) {
		posicionX=+velocidadMovimiento;
		posicionY=+velocidadMovimiento;
	}
}

void ZombieDisco::invocarZombis() {
		
}