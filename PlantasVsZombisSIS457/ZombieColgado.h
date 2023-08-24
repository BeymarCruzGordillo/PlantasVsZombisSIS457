#pragma once
#include "Zombi.h"
//Zombie Colgado; es un tipo de zombi que cuelga de una cuerda y se lleva a una planta con el
class ZombieColgado : public Zombi
{
	private:
	int alturaTierra;

public:
	//constructores
	ZombieColgado();
	ZombieColgado(int _alturaColgado);

	//Metodos propios
	void colgarse();
	void secuestrarPlanta();

	//polimorfismo
	virtual void moverse();
	
	//Metodos accesores
	int getAlturaColgado() { return alturaTierra; }
	void setAlturaColgado(int _alturaColgado) { alturaTierra = _alturaColgado; }
};

