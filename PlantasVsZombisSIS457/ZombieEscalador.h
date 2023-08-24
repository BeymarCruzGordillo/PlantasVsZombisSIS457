#pragma once
#include "Zombi.h"
class ZombieEscalador : public Zombi
{
private:
	int escudoDeEscalera;
	int durezaDeEscalera;
public:
	//constructores
	ZombieEscalador();
	ZombieEscalador(int _escudoDeEscalera, int _durezaDeEscalera);

	//Metodos propios
	//Escala una planta que tenga mucha dureza o energia
	void escalar();
};

