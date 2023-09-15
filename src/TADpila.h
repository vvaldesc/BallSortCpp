/*
 * TADpila.h
 *
 *  Created on: 2 ene. 2021
 *      Author: Víctor Valdés Cobos
 */

#ifndef TADPILA_H_
#define TADPILA_H_

using namespace std;
#include <iostream>

const int MAXbolas=6;
const int MINbolas=3;

typedef int TVector[MAXbolas];

struct pila{
	TVector vector;
	int ocupadas;
	int bolasXPilaVector;
};

/*
 * PRE: {Estructura pila inicializada correctamente}
 * POST: {Inicia la estructura pila}
 * COMPLEJIDAD: O(1)
 */
void iniciar(pila &p);

/*
 * PRE: {Estructura pila inicializada correctamente}
 * POST: {Inserta una bola en la pila}
 * COMPLEJIDAD: O(1)
 */
void insertar(pila &p,int color);

/*
 * PRE: {Estructura pila inicializada correctamente}
 * POST: {Devuelve el color de la cima de la pila}
 * COMPLEJIDAD: O(1)
 */
int obtenerColorcima(pila p);

/*
 * PRE: {Estructura pila inicializada correctamente}
 * POST: {Devuelve la capacidad de la pila}
 * COMPLEJIDAD: O(1)
 */
int obtenerCapacidadpila(pila p);

/*
 * PRE: {Estructura pila inicializada correctamente}
 * POST: {Devuelve las ocupadas de la pila}
 * COMPLEJIDAD: O(1)
 */
int obtenerOcupadaspila(pila p);

/*
 * PRE: {Estructura pila inicializada correctamente}
 * POST: {Quita una bola de la pila}
 * COMPLEJIDAD: O(1)
 */
void quitarBola(pila &p);

/*
 * PRE: {Estructura pila inicializada correctamente}
 * POST: {Pone la capacidad máxima de la pila}
 * COMPLEJIDAD: O(1)
 */
void ponerbolasXPilaVector(pila &p, int bolaXPila);

/*
 * PRE: {Estructura pila inicializada correctamente}
 * POST: {Devuelve true si la pila contiene solo bolas del mismo color}
 * COMPLEJIDAD: O(1)
 */
bool pilaOrdenada(pila &p);


#endif /* TADPILA_H_ */
