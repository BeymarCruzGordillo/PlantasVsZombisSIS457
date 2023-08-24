#include <iostream>
#include "Planta.h"
#include "Zombi.h"
#include "Escenario.h"
#include "Proyectil.h"
#include "SobreSemilla.h"
#include "Podadora.h"
#include "Tabla.h"
#include "Moneda.h"
#include "Sol.h"
#include "SobreSemilla.h"
int main()
{
    Planta planta1("Imagen/Planta");
    planta1.nombre = "Lanza Gizantes";
    cout << "Se creo la planta " << planta1.nombre << endl;
    cout << "La planta tiene una vida de " << planta1.getVida() << endl;
    cout << "La planta tiene un daño de " << planta1.getDanio() << endl;
    cout << "La planta tiene una velocidad de ataque de " << planta1.getVelocidadAtaque() << endl;
    planta1.atacar();
    cout << endl;


    Zombi zombie1("Imagen/Zombi");
    zombie1.nombre = "Zombi comun";
    cout << "Se creo el zombi   " << zombie1.nombre << endl;
    cout << "El zombi tiene una vida de " << zombie1.getVida() << endl;
    cout << "El zombi tiene un daño de " << zombie1.getDanio() << endl;
    cout << "El zombi tiene una velocidad de ataque de " << zombie1.getVelocidadAtaque() << endl;
    zombie1.atacar();
    cout << endl;

    Proyectil proyectil1("Imagen/Proyectil");
    proyectil1.nombre = "Guisante";
    cout << "Se creo el proyectil   " << proyectil1.nombre << endl;
    cout << "El proyectil tiene un daño de " << proyectil1.getDanio() << endl;
    cout << "El proyectil tiene una velocidad de ataque de " << proyectil1.getVelocidadMovimiento() << endl;
    proyectil1.colision();
    cout << endl;

    Podadora podadora1("Imagen/Podadora");
    cout << "Se creo la podadora   " << podadora1.getNombre() << endl;
    cout << "Su velocidad de movimiento es " << podadora1.getVelocidadMovimiento() << endl;
    podadora1.limpiarLinea();
    cout << endl;

    Moneda moneda1("Moneda/Imagen");
    cout << "Se creo la moneda   " << moneda1.getNombre() << endl;
    cout << "Su valor es de " << moneda1.getValor() << endl;
    moneda1.aparecer();
    cout << endl;

    Sol sol1("Imagen/Sol");
    cout << "Se creo el sol   " << sol1.getNombre() << endl;
    cout << "Su valor es de " << sol1.getValor() << endl;
    cout << endl;

    Escenario escenario1("Imagen/Escenario");
    escenario1.nombre = "Jardin";
    cout << "Se creo el escenario   " << escenario1.nombre << endl;
    cout << "Nivel de escenario No " << escenario1.getNivel() << endl;
    cout << "Numero de asaltos " << escenario1.getNumeroDeAsaltos() << endl;
    escenario1.iniciarAsalto();
    cout << endl;

    SobreSemilla sobreSemilla01("Imagen/SobreSemilla");
    sobreSemilla01.nombreSemilla = "Girasol";
    cout << "Se creo el sobre de semilla   " << sobreSemilla01.getNombre() << endl;
    cout << "El sobre contiene al semilla de " << sobreSemilla01.nombreSemilla << endl;
    cout << "El sobre tiene un valor de " << sobreSemilla01.getValor() << endl;
    sobreSemilla01.carga();

    Tabla tablaA("Imagen/Tabla");
    cout << "Se creo la tabla   " << tablaA.getNombre() << endl;
    cout << "numero de casillas " << tablaA.getNumeroCasillas() << endl;
    cout << "Plantas Disponibles " << tablaA.getPlantasDisponibles() << endl;
    tablaA.mostrarTabla();
    cout << endl;



}

