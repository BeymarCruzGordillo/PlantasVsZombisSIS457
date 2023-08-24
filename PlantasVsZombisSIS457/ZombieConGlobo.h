#pragma once
#include "Zombi.h"
class ZombieConGlobo:public Zombi
{
private:
	int alturaDeVuelo;
	int durezaDelGlobo;
public:
	//constructores
	ZombieConGlobo();
	ZombieConGlobo(int _alturaDeVuelo, int _durezaDelGlobo);

	//Polimorfismo 
	virtual void moverse();
};

