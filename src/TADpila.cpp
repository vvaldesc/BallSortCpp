/*
 * TADpila.cpp
 *
 *  Created on: 2 ene. 2021
 *      Author: Víctor Valdés Cobos
 */


#include "TADpila.h"

void iniciar(pila &p){
	p.ocupadas=0;
	p.bolasXPilaVector=0;
}

void insertar(pila &p,int color){
	if(p.ocupadas<p.bolasXPilaVector and p.ocupadas>=0){
		p.vector[p.ocupadas]=color;
		p.ocupadas++;
	}
}


int obtenerColorcima(pila p){
	if(p.vector[p.ocupadas-1]<1 or p.vector[p.ocupadas-1]>8)
		cout << "el color de la bola" << p.ocupadas << " no corresponde a ningun color" <<endl;
	return p.vector[p.ocupadas-1];
}

int obtenerCapacidadpila(pila p){
	return p.bolasXPilaVector;
}

int obtenerOcupadaspila(pila p){
	return p.ocupadas;
}

void quitarBola(pila &p){
	if(p.ocupadas>0){
		p.ocupadas--;
	}
}

void ponerbolasXPilaVector(pila &p, int bolaXPila){
	if(3<=bolaXPila and bolaXPila<=6){
		p.bolasXPilaVector=bolaXPila;
	}
	else{
		cout<<"el nº de bolas por pila no respeta el límite establecido"<<endl;
	}
}

bool pilaOrdenada(pila &p){
	pila paux;
	iniciar(paux);
	ponerbolasXPilaVector(paux,6);
	bool bandera=true;
	int color1=obtenerColorcima(p);
	quitarBola(p);
	insertar(paux,color1);
	while(obtenerOcupadaspila(p)>0){
		int color2=obtenerColorcima(p);
		quitarBola(p);
		insertar(paux,color2);
		if(color2!=color1){
			bandera=false;
			break;
		}
	}
	while(obtenerOcupadaspila(paux)>0){
		int color2=obtenerColorcima(paux);
		quitarBola(paux);
		insertar(p,color2);
	}
		return bandera;
}
