/*
 * pruebas_TADtablero.cpp
 *
 *  Created on: 16 jun. 2021
 *      Author: ubuntu
 */


#include "pruebas_TADtablero.h"

void pruebasTablero(){
	//pruebasTablero();
	//prueba_iniciarTablero();
	//prueba_ponerCapacidadTableroPila();
	//prueba_insertarBola();
	prueba_obtenerCima();
	prueba_obtenerOcupadasPila();
	prueba_sacarBola();
	prueba_obtenerBolasXpila();
	//prueba_ponerNumeroPilas();
	//prueba_tableroOrdenado();
	//	prueba_obtenerbolasXPilaTablero();
	prueba_mismoColorPila();
	//prueba_anadirPila();

}

void prueba_iniciarTablero() {
	tablero t1,t2,t3,t4;
	iniciarTablero(t1,4);
		if(obtenerbolasXPilaTablero(t1)!=0)
			cout<<"error en prueba_iniciarTablero1"<<endl;
		if(obtenerNumeroPilas(t1)!=4)
			cout<<"error en prueba_iniciarTablero1"<<endl;
		if(obtenerOcupadasPila(t1,0)!=0)
			cout<<"error en prueba_iniciarTablero1"<<endl;
		if(obtenerOcupadasPila(t1,1)!=0)
			cout<<"error en prueba_iniciarTablero1"<<endl;
		if(obtenerOcupadasPila(t1,2)!=0)
			cout<<"error en prueba_iniciarTablero1"<<endl;
		if(obtenerOcupadasPila(t1,3)!=0)
			cout<<"error en prueba_iniciarTablero1"<<endl;
	iniciarTablero(t2,-2);
		if(obtenerNumeroPilas(t2)!=0)
			cout<<"error en prueba_iniciarTablero2"<<endl;
	iniciarTablero(t3,0);
		if(obtenerbolasXPilaTablero(t2)!=0)
			cout<<"error en prueba_iniciarTablero3"<<endl;
		if(obtenerNumeroPilas(t2)!=4)
			cout<<"error en prueba_iniciarTablero3"<<endl;
		if(obtenerOcupadasPila(t2,0)!=0)
			cout<<"error en prueba_iniciarTablero3"<<endl;
		if(obtenerOcupadasPila(t2,1)!=0)
			cout<<"error en prueba_iniciarTablero3"<<endl;
		if(obtenerOcupadasPila(t2,2)!=0)
			cout<<"error en prueba_iniciarTablero3"<<endl;
		if(obtenerOcupadasPila(t2,3)!=0)
			cout<<"error en prueba_iniciarTablero3"<<endl;
	iniciarTablero(t4,20);
		if(obtenerbolasXPilaTablero(t4)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerNumeroPilas(t4)!=10)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerOcupadasPila(t4,0)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerOcupadasPila(t4,1)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerOcupadasPila(t4,2)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerOcupadasPila(t4,3)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerOcupadasPila(t4,3)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerOcupadasPila(t4,3)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerOcupadasPila(t4,3)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerOcupadasPila(t4,3)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerOcupadasPila(t4,3)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
		if(obtenerOcupadasPila(t4,3)!=0)
			cout<<"error en prueba_iniciarTablero4"<<endl;
}

void prueba_ponerCapacidadTablero() {
	tablero t1;
	iniciarTablero(t1,3);
	ponerCapacidadTablero(t1,5);
	if(obtenerbolasXPilaTablero(t1)!=5)
		cout<<"error en prueba_iniciarTablero"<<endl;
	ponerCapacidadTablero(t1,10);
	if(obtenerbolasXPilaTablero(t1)==10)
		cout<<"error en prueba_iniciarTablero"<<endl;
	ponerCapacidadTablero(t1,0);
	if(obtenerbolasXPilaTablero(t1)!=0)
		cout<<"error en prueba_iniciarTablero"<<endl;
	ponerCapacidadTablero(t1,-2);
	if(obtenerbolasXPilaTablero(t1)==-2)
		cout<<"error en prueba_iniciarTablero"<<endl;
}

void prueba_insertarBola() {
	tablero t1;
	iniciarTablero(t1,4);
	ponerCapacidadTablero(t1,5);
	insertarBola(t1,0,2);
		if(obtenerCima(t1,0)!=2)
			cout<<"error en prueba_insertarBola"<<endl;
	insertarBola(t1,0,3);
		if(obtenerCima(t1,0)!=3)
			cout<<"error en prueba_insertarBola"<<endl;
	insertarBola(t1,3,4);
		if(obtenerCima(t1,3)!=3)
			cout<<"error en prueba_insertarBola"<<endl;
	insertarBola(t1,-1,6);
		if(obtenerCima(t1,0)==6)
			cout<<"error en prueba_insertarBola"<<endl;
		if(obtenerCima(t1,1)==6)
			cout<<"error en prueba_insertarBola"<<endl;
		if(obtenerCima(t1,2)==6)
			cout<<"error en prueba_insertarBola"<<endl;
		if(obtenerCima(t1,3)==6)
			cout<<"error en prueba_insertarBola"<<endl;
		insertarBola(t1,30,6);
			if(obtenerCima(t1,0)==6)
				cout<<"error en prueba_insertarBola"<<endl;
			if(obtenerCima(t1,1)==6)
				cout<<"error en prueba_insertarBola"<<endl;
			if(obtenerCima(t1,2)==6)
				cout<<"error en prueba_insertarBola"<<endl;
			if(obtenerCima(t1,3)==6)
				cout<<"error en prueba_insertarBola"<<endl;
}

void prueba_obtenerCima() {
	tablero t1;
	iniciarTablero(t1,4);
	ponerCapacidadTablero(t1,3);
	insertarBola(t1,0,2);
		if(obtenerCima(t1,0)!=2)
			cout<<"error en prueba_obtenerCima"<<endl;
	insertarBola(t1,0,-2);
		if(obtenerCima(t1,0)!=-2)
			cout<<"error en prueba_obtenerCima"<<endl;
		if(obtenerCima(t1,1)!=-2)
			cout<<"error en prueba_obtenerCima"<<endl;
		if(obtenerCima(t1,2)!=-2)
			cout<<"error en prueba_obtenerCima"<<endl;
		if(obtenerCima(t1,3)!=-2)
			cout<<"error en prueba_obtenerCima"<<endl;
	insertarBola(t1,0,200);
		if(obtenerCima(t1,0)!=200)
			cout<<"error en prueba_obtenerCima"<<endl;
		if(obtenerCima(t1,1)!=200)
			cout<<"error en prueba_obtenerCima"<<endl;
		if(obtenerCima(t1,2)!=200)
			cout<<"error en prueba_obtenerCima"<<endl;
		if(obtenerCima(t1,3)!=200)
			cout<<"error en prueba_obtenerCima"<<endl;
}

void prueba_obtenerOcupadasPila() {
	tablero t1;
	iniciarTablero(t1,4);
	ponerCapacidadTablero(t1,5);
	insertarBola(t1,0,2);
		if(obtenerOcupadasPila(t1,0)!=1)
			cout<<"error en prueba_obtenerOcupadasPil1a"<<endl;
		insertarBola(t1,0,2);
		insertarBola(t1,0,2);
		insertarBola(t1,0,2);
		insertarBola(t1,0,2);
		insertarBola(t1,0,2);
		insertarBola(t1,0,2);
		insertarBola(t1,0,2);
		if(obtenerOcupadasPila(t1,0)!=5)
			cout<<"error en prueba_obtenerOcupadasPila2"<<endl;
		sacarBola(t1,0);
		if(obtenerOcupadasPila(t1,0)!=4)
			cout<<"error en prueba_obtenerOcupadasPila3"<<endl;
		sacarBola(t1,0);
		sacarBola(t1,0);
		sacarBola(t1,0);
		sacarBola(t1,0);
		sacarBola(t1,0);
		sacarBola(t1,0);
		if(obtenerOcupadasPila(t1,0)!=0)
			cout<<"error en prueba_obtenerOcupadasPila4"<<endl;
}

void prueba_sacarBola() {
	tablero t1;
	iniciarTablero(t1,4);
	ponerCapacidadTablero(t1,5);
	insertarBola(t1,0,2);
	insertarBola(t1,0,5);
	sacarBola(t1,0);
		if(obtenerCima(t1,0)!=2)
			cout<<"error en prueba_sacarBola1"<<endl;
		sacarBola(t1,0);
		sacarBola(t1,0);
		sacarBola(t1,0);
		sacarBola(t1,0);
		if(obtenerOcupadasPila(t1,0)!=0)
			cout<<"error en prueba_sacarBola2"<<endl;
}

void prueba_obtenerBolasXpila() {
	tablero t1,t2,t3;
	iniciarTablero(t1,3);
	ponerCapacidadTablero(t1,-2);
		if(obtenerBolasXpila(t1,0)!=0)
			cout<<"error en prueba_obtenerBolasXpila1"<<endl;
	iniciarTablero(t2,9);
	ponerCapacidadTablero(t1,90);
		if(obtenerBolasXpila(t1,9)!=5)
			cout<<"error en prueba_obtenerBolasXpila2"<<endl;
	iniciarTablero(t3,10);
	ponerCapacidadTablero(t1,2);
		if(obtenerBolasXpila(t1,0)!=2)
			cout<<"error en prueba_obtenerBolasXpila3"<<endl;
}

void prueba_obtenerNumeroPilas(){
	tablero t1;
	iniciarTablero(t1,4);
	ponerCapacidadTablero(t1,5);
	if(obtenerNumeroPilas(t1)!=5)
		cout<<"error en prueba_obtenerNumeroPilas"<<endl;
}

void prueba_ponerNumeroPilas() {
	tablero t1;
	iniciarTablero(t1,4);
	ponerCapacidadTablero(t1,5);
}

void prueba_tableroOrdenado() {
	tablero t1,t2;
	iniciarTablero(t1,4);
	ponerCapacidadTablero(t1,5);
	insertarBola(t1,0,2);
	insertarBola(t1,0,2);
	insertarBola(t1,0,2);
	insertarBola(t1,0,2);
		if(!tableroOrdenado(t1,1))
			cout<<"error en prueba_tableroOrdenado1"<<endl;
		iniciarTablero(t2,4);
		ponerCapacidadTablero(t2,5);
		insertarBola(t1,3,20);
		insertarBola(t1,3,20);
		insertarBola(t1,3,20);
		insertarBola(t1,3,20);
		insertarBola(t1,3,20);
		insertarBola(t1,3,20);
		insertarBola(t1,3,20);
		insertarBola(t1,3,20);
		insertarBola(t1,4,20);
		insertarBola(t1,4,20);
		insertarBola(t1,4,20);
		insertarBola(t1,4,20);
		insertarBola(t1,4,20);
		insertarBola(t1,4,20);
			if(!tableroOrdenado(t2,2))
				cout<<"error en prueba_tableroOrdenado2"<<endl;
}


void prueba_ponerCapacidadTableroPila() {
	tablero t1;
	iniciarTablero(t1,4);
	ponerCapacidadTablero(t1,5);
	ponerNumeroPilas(t1,2,false);
	if(obtenerNumeroPilas(t1)!=2)
		cout<<"error en prueba_ponerCapacidadTableroPila"<<endl;
	ponerNumeroPilas(t1,-2,false);
	if(obtenerNumeroPilas(t1)!=2)
		cout<<"error en prueba_ponerCapacidadTableroPila"<<endl;
	ponerNumeroPilas(t1,200,false);
	if(obtenerNumeroPilas(t1)!=9)
		cout<<"error en prueba_ponerCapacidadTableroPila"<<endl;
}


void prueba_obtenerbolasXPilaTablero() {
	tablero t1;
	iniciarTablero(t1,4);
	ponerCapacidadTablero(t1,5);
	if(obtenerNumeroPilas(t1)!=2)
		cout<<"error en prueba_obtenerbolasXPilaTablero"<<endl;
}

void prueba_bolasXPilaTablero() {
	tablero t1;
	iniciarTablero(t1,4);
	ponerCapacidadTablero(t1,5);
		if(obtenerbolasXPilaTablero(t1)!=5)
			cout<<"error en prueba_bolasXPilaTablero"<<endl;
		ponerCapacidadTablero(t1,-5);
			if(obtenerbolasXPilaTablero(t1)==5)
				cout<<"error en prueba_bolasXPilaTablero"<<endl;
}

void prueba_mismoColorPila() {
	tablero t1;
	iniciarTablero(t1,4);
	insertarBola(t1,0,2);
	if(!mismoColorPila(t1,0,2))
		cout<<"error en prueba_mismoColorPila"<<endl;
	if(mismoColorPila(t1,0,6))
		cout<<"error en prueba_mismoColorPila"<<endl;
}

void prueba_anadirPila() {
	tablero t1;
	iniciarTablero(t1,5);
	ponerCapacidadTablero(t1,3);
	anadirPila(t1,3);
	if(obtenerNumeroPilas(t1)!=6)
		cout<<"error en prueba_anadirPila"<<endl;
}


