/*
 * TADtablero.h
 *
 *  Created on: 2 ene. 2021
 *      Author: Víctor Valdés Cobos
 */
#include "TADpila.h"


#ifndef TADTABLERO_H_
#define TADTABLERO_H_

const int MAXpilas=10;
const int MINpilas=4;

typedef pila vTablero[MAXpilas];

struct tablero{
	int pilas;
	vTablero p;
};

/*
 * PRE: {Estructura tablero iniciada correctamente}
 * POST: {Devuelve en pantalla el tablero que corresponde a los colores de cada bola y las ocupadas de cada pila}
 * 		{obtenerNumeroPilas(t)>=0;obtenerBolasXpila(t,i)-1>=0}
 * COMPLEJIDAD: O(n2)
 */
//void mostrarPantalla (tablero t);

/*
 * PRE: {Estructura tablero iniciada correctamente}
 * 		{X>=0}
 * POST: {Inicia tantas pilas como el entero x indique}
 * COMPLEJIDAD: O(n)
 */
void iniciarTablero(tablero &t,int x);

/*
 * PRE: {Estructura tablero iniciada correctamente}{3<=bolaXpila<=6}
 * POST: {Pone el numero de bolas máximo que pueden tener las pilas del tablero}
 * COMPLEJIDAD: O(n)
 */
void ponerCapacidadTablero(tablero &t,int bolaXPila);

/*
 * PRE: {Estructura tablero iniciada correctamente}{3<=bolaXpila<=6}
 * POST: {Pone el numero de bolas máximo que pueden tener las pilas del tablero}
 * COMPLEJIDAD: O(n)
 */
void ponerCapacidadTableroPila(tablero &t,int bolaXPila,int i);

/*
 * PRE: {Estructura tablero iniciada correctamente}
 * POST: {Introduce una bola en la pila}
 * COMPLEJIDAD: O(1)
 */
void insertarBola(tablero &t,int i,int color);


/*
 * PRE: {Estructura tablero iniciada correctamente}
 * POST: {Devuelve el color de la bola que se encuentra en la cima de la pila}
 * COMPLEJIDAD: O(1)
 */
int obtenerCima(tablero &t,int i);

/*
 * PRE: {Estructura tablero iniciada correctamente}
 * POST: {Devuelve un entero a las ocupadas de la pila seleccionada}
 * COMPLEJIDAD: O(1)
 */
int obtenerOcupadasPila(tablero &t, int x);

/*
 * PRE: {Tablero iniciado correctamente}
 * 		{Ocupadas tienen que ser mayor que 0}
 * POST: {Saca una bola de a pila seleccionada}
 * COMPLEJIDAD: O(1)
 */
void sacarBola (tablero &t, int x);

/*
 * PRE: {Tablero iniciado correctamente}
 * POST: {Devuelve la capacidad de la pila del tablero}
 * COMPLEJIDAD: O(1)
 */
int obtenerBolasXpila(tablero &t, int x);


/*
 * PRE: {Tablero iniciado correctamente}
 * POST: {Devuelve el número de pilas que hay en el tablero}
 * COMPLEJIDAD: O(1)
 */
int obtenerNumeroPilas(tablero &t);

/*
 * PRE: {Tablero iniciado correctamente}
 * POST: {Pone el número de pilas que hay en el tablero}
 * COMPLEJIDAD: O(1)
 */
void ponerNumeroPilas(tablero &t,int pilas,bool anadirpila);

/*
 * PRE: {Tablero iniciado correctamente}
 * {pilasllenas corresponde al número de pilas rellenas al inicio del programa}
 * {0<pilasllenas<=número máximo de pilas en el tablero}
 * POST: {Verifica si las pilas del tablero están ordenadas y devuelve true en caso de que sí}
 * COMPLEJIDAD: O(2*n2)
 */
bool tableroOrdenado (tablero &t,int pilasllenas);

/*
 * PRE: {Tablero iniciado correctamente}
 * POST: {Devuelve el número entero de bolas que pueden tener las pilas del tablero}
 * COMPLEJIDAD: O(n)
 */
int obtenerbolasXPilaTablero(tablero &t);

/*
 * PRE: {Tablero iniciado correctamente}
 * POST: {Saca una bola de a pila seleccionada}
 * COMPLEJIDAD: O(1)
 */
bool mismoColorPila (tablero &t,int pila,int color);

/*
 * PRE: {Tablero iniciado correctamente}
 * POST: {Saca una bola de a pila seleccionada}
 * COMPLEJIDAD: O(1)
 */
void anadirPila(tablero &t,int capacidad);
#endif /* TADTABLERO_H_ */
