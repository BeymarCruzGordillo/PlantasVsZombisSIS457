#include "ZombieLanzaGizantes.h"
//Zombi lanza Gizantes
//Zombi mutante con cabeza de una planta que lanza gizantes
ZombieLanzaGizantes::ZombieLanzaGizantes()
{
	cabezaGizante = 0;
}

ZombieLanzaGizantes::ZombieLanzaGizantes(int _cabezaGizante)
{
	cabezaGizante = _cabezaGizante;
}

void ZombieLanzaGizantes::lanzarGizantes() {
	cout << "Zombi lanzando gizantes" << endl;
}
