/*
 * TADjuego.h
 *
 *  Created on: 2 ene. 2021
 *      Author: Víctor Valdés Cobos
 */

#include "TADtablero.h"


//int const MAX_TAM=12;

struct juego{
	tablero Tablero;
	int puntos;
};

#ifndef TADJUEGO_H_
#define TADJUEGO_H_

/*
 * PRE: {Estructura juego iniciada correctamente}
 * POST: {Gestiona los controles del juego y llama a las demás funciones del programa de forma que este funcione correctamente}
 * COMPLEJIDAD: O(n3)
 */
void Juego(juego &j);

#endif /* TADJUEGO_H_ */
