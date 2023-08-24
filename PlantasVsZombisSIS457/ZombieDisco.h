#pragma once
#include "Zombi.h"
class ZombieDisco:public Zombi
{
	int cantidadZombisInvocadas = 4;
	int nivelDestrezaBaile = 8;
public:
	//constructores
	ZombieDisco();
	ZombieDisco(int _velocidadBaile, int _nivelDestrezaBaile);

public:
	//Metodos moverse

	virtual void moverse();
	void invocarZombis();

	//Metodos accesores
	int getCantidadZombisInvocadas() { return cantidadZombisInvocadas; }
	void setCantidadZombisInvocadas(int _cantidadZombisInvocadas) { cantidadZombisInvocadas = _cantidadZombisInvocadas; }

	int getNivelDestrezaBaile() { return nivelDestrezaBaile; }
	void setNivelDestrezaBaile(int _nivelDestrezaBaile) { nivelDestrezaBaile = _nivelDestrezaBaile; }
};

