#include "ZombieEscalador.h"
//zombi escalador
//Zombi que sujeta una esscalera como escudo y deja la escalera sobre una planta
//que tiene mucha resistencia o energia

ZombieEscalador::ZombieEscalador()
{
	escudoDeEscalera = 0;
	durezaDeEscalera = 50;
}

ZombieEscalador::ZombieEscalador(int _escudoDeEscalera, int _durezaDeEscalera)
{
	escudoDeEscalera = _escudoDeEscalera;
	durezaDeEscalera = _durezaDeEscalera;
}

void ZombieEscalador::escalar() {
	cout << "Zombi escalando" << endl;
}

