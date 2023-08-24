#include "Zombi.h"

Zombi::Zombi() {
	posicionX = 0;
	posicionY = 0;
	vida = 100;
	daño = 7;
	velocidadMovimiento = 0.5;
	velocidadAtaque = 1.5;
	alto = 1.5;
	ancho = 1.5;
	rutaArchivoImagen = "zombi.png";
}

Zombi::Zombi(string RutaImagen) {
	posicionX = 2;
	posicionY = 3;
	vida = 200;
	daño = 15;
	velocidadMovimiento = 3;
	velocidadAtaque = 2;
	alto = 2;
	ancho = 1;
	rutaArchivoImagen = RutaImagen;
}

void Zombi::aparecer() {
	posicionX = 0;
	posicionY = 0;
}

void Zombi::moverse() {
	posicionX += direccionX;
	posicionY += direccionY;
}

void Zombi::atacar() {
	cout << "Zombi atacando" << endl;
}

void Zombi::morir() {
	cout << "Zombi muerto" << endl;
}
