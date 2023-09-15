/*
 * pruebas_TADpila.cpp
 *
 *  Created on: 15 jun. 2021
 *      Author: ubuntu
 */

#include "pruebas_TADpila.h"

//pila pPrueba;

	//pila pPrueba;


void pruebasPila() {
	cout<<"inicio pruebasPila"<<endl;
	pruebaIniciarPila();
	pruebaInsertarPila();
	pruebaobtenerCapacidadpila();
	pruebaponerOcupadaspila();
	pruebaponerbolasXPila();
	pruebaobtenerCimaPila();
	pruebaobtenerBolasPorPila();
	pruebapilaOrdenada();
	cout<<"fin pruebasPila"<<endl;

}

void pruebaIniciarPila(){
	pila pPrueba;
	iniciar(pPrueba);
	if(obtenerOcupadaspila(pPrueba)!=0 or obtenerCapacidadpila(pPrueba) !=0)
		cout<<"error en pruebaIniciarPila"<<endl;
}

void pruebaInsertarPila(){
	pila pPrueba;
	iniciar(pPrueba);
	ponerbolasXPilaVector(pPrueba,6);
	insertar(pPrueba,1);
	if(obtenerColorcima(pPrueba)!=1)
		cout<<"error en pruebaInsertarPila"<<endl;

}

void pruebaobtenerCapacidadpila(){
	pila pPrueba;
	iniciar(pPrueba);
	ponerbolasXPilaVector(pPrueba,10);
	if(obtenerCapacidadpila(pPrueba)==10)
		cout<<"error en pruebaobtenerCapacidadpila"<<endl;
	ponerbolasXPilaVector(pPrueba,5);
	if(obtenerCapacidadpila(pPrueba)!=5)
		cout<<"error en pruebaobtenerCapacidadpila"<<endl;
	insertar(pPrueba,1);
	insertar(pPrueba,1);
	insertar(pPrueba,1);
	if(obtenerCapacidadpila(pPrueba)!=5)
		cout<<"error en pruebaobtenerCapacidadpila"<<endl;
	insertar(pPrueba,1);
	insertar(pPrueba,1);
	insertar(pPrueba,1);
	if(obtenerCapacidadpila(pPrueba)!=5)
		cout<<"error en pruebaobtenerCapacidadpila"<<endl;
}



void pruebaobtenerOcupadaspila() {
	pila pPrueba;
	iniciar(pPrueba);
	ponerbolasXPilaVector(pPrueba,5);
	if(obtenerOcupadaspila(pPrueba)!=0)
		cout<<"error en pruebaobtenerCapacidadpila"<<endl;
	insertar(pPrueba,1);
	insertar(pPrueba,1);
	insertar(pPrueba,1);
	if(obtenerOcupadaspila(pPrueba)!=3)
		cout<<"error en pruebaobtenerCapacidadpila"<<endl;
	insertar(pPrueba,1);
	insertar(pPrueba,1);
	insertar(pPrueba,1);
	if(obtenerOcupadaspila(pPrueba)!=5)
		cout<<"error en pruebaobtenerCapacidadpila"<<endl;
}

void pruebaquitarBola() {
	pila pPrueba;
	iniciar(pPrueba);
	ponerbolasXPilaVector(pPrueba,4);
	quitarBola(pPrueba);
	if(obtenerCapacidadpila(pPrueba)!=0)
		cout<<"error en pruebaquitarBola"<<endl;
}

void pruebaponerOcupadaspila() {
	pila pPrueba;
	iniciar(pPrueba);
	ponerbolasXPilaVector(pPrueba,4);
	//ponerOcupadaspila(pPrueba,5);
	if(obtenerOcupadaspila(pPrueba)!=5)
		cout<<"error en pruebaponerOcupadaspila"<<endl;
}

void pruebaponerquitarBola() {
	pila pPrueba;
	iniciar(pPrueba);
	ponerbolasXPilaVector(pPrueba,4);
	//ponerOcupadaspila(pPrueba,5);
	if(obtenerOcupadaspila(pPrueba)!=5)
		cout<<"error en pruebaponerOcupadaspila"<<endl;
}

void pruebaponerbolasXPila(){
	pila pPrueba;
	iniciar(pPrueba);
	ponerbolasXPilaVector(pPrueba,4);

	insertar(pPrueba,2);
	insertar(pPrueba,2);
	insertar(pPrueba,2);
	insertar(pPrueba,2);
	insertar(pPrueba,2);
	insertar(pPrueba,2);
	insertar(pPrueba,2);
	if(obtenerOcupadaspila(pPrueba)!=4)
		cout<<"error en pruebaponerOcupadaspila"<<endl;
}

void pruebaobtenerCimaPila() {
	pila pPrueba;
	iniciar(pPrueba);
	ponerbolasXPilaVector(pPrueba,4);
	insertar(pPrueba,2);
	if(obtenerColorcima(pPrueba)!=2)
		cout<<"error en pruebaobtenerCimaPila"<<endl;
}



void pruebaobtenerBolasPorPila() {
	pila pPrueba;
	iniciar(pPrueba);
	ponerbolasXPilaVector(pPrueba,4);
	if(obtenerCapacidadpila(pPrueba)!=4)
		cout<<"error en pruebaobtenerBolasPorPila"<<endl;
}

void pruebapilaOrdenada() {
	pila pPrueba2;
	iniciar(pPrueba2);
	ponerbolasXPilaVector(pPrueba2,4);
	insertar(pPrueba2,1);
	insertar(pPrueba2,1);
	insertar(pPrueba2,1);
	insertar(pPrueba2,1);
	if(!pilaOrdenada(pPrueba2))
		cout<<"error en pilaOrdenada"<<endl;
}
