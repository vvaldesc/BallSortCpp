/*
 * TADtablero.cpp
 *
 *  Created on: 2 ene. 2021
 *      Author: Víctor Valdés Cobos
 */
#include "TADtablero.h"

/*void mostrarPantalla (tablero t){
	cout <<"Los valores de las bolas son:"<<endl;
	int j=0;int i=0;
	for(j=obtenerBolasXpila(t,i)-1;j>=0;j--){
		for(i=0;i<obtenerNumeroPilas(t);i++){
			if(j<obtenerOcupadasPila(t,i)){
				cout <<t.p[i].vector[j] << ",";
			}
			else{
				cout << 0 << ",";
			}
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(int i=0;i<obtenerNumeroPilas(t);i++){
		cout <<obtenerOcupadasPila(t,i) << ",";
	}
	 cout << endl;
		for(int i=0;i<obtenerNumeroPilas(t);i++){
			cout <<obtenerBolasXpila(t,i) << ",";
		}
		 cout << endl;
}
*/
void iniciarTablero(tablero &t,int x){
	if(x>10){
		cout<< "el tamaño del tablero es mayor que el máximo (10 pilas)" <<endl;
		x=10;
	}
	if(x<4){
		cout<< "el tamaño del tablero es menor que el mínimo (4 pilas)" <<endl;
		x=4;
	}
	for(int i=0;i<x;i++){
		iniciar(t.p[i]);
		t.pilas++;
	}
}

void ponerCapacidadTablero(tablero &t,int bolaXPila){
	for(int x=0;x<obtenerNumeroPilas(t);x++){
		ponerbolasXPilaVector(t.p[x],bolaXPila);
	}
}

void ponerCapacidadTableroPila(tablero &t,int bolaXPila,int x){
	ponerbolasXPilaVector(t.p[x],bolaXPila);
}

void insertarBola(tablero &t,int i,int color){
	if(i<=obtenerNumeroPilas(t) or i>=obtenerNumeroPilas(t))
		insertar(t.p[i],color);
	else
		cout<< "La pila en la que se inserta la bola no existe" << endl;
}

int obtenerCima(tablero &t,int i){
	return obtenerColorcima(t.p[i]);
}

int obtenerOcupadasPila(tablero &t, int x){
	return obtenerOcupadaspila(t.p[x]);
}

void sacarBola (tablero &t, int x){
	quitarBola(t.p[x]);
}

int obtenerBolasXpila(tablero &t, int x){
	return obtenerCapacidadpila(t.p[x]);
}

int obtenerNumeroPilas(tablero &t){
	return t.pilas;
}

void ponerNumeroPilas(tablero &t,int pilas,bool anadirpila){
	if(anadirpila){
		if(pilas>10){
			cout<< "el tamaño del tablero es mayor que el máximo (10 pilas)" <<endl;
			pilas=10;
		}
	}
	if(pilas<4){
		cout<< "el tamaño del tablero es menor que el mínimo (4 pilas)" <<endl;
		pilas=4;
	}
	t.pilas=pilas;
}

bool tableroOrdenado(tablero &t,int pilasllenas){
	bool bandera=false;
		int pos=0;int i=0;
			for(pos=0;pos<obtenerNumeroPilas(t);pos++){
				if(obtenerOcupadasPila(t,pos)==obtenerBolasXpila(t,pos)){
					if(pilaOrdenada(t.p[pos])){
						i++;
					}
					else{
					}
			}
		}
		if(i==pilasllenas){
			bandera=true;
		}
		return bandera;
}

int obtenerbolasXPilaTablero(tablero &t){
	int i=0;
	int Comprobacion=obtenerBolasXpila(t,i);
	for(i=1;i<obtenerNumeroPilas(t);i++){
		if(obtenerBolasXpila(t,i)!=Comprobacion)
		cout<<"número de bolas por pila no es el mismo en la pila "<< i << endl;
	}
	return Comprobacion;
}

bool mismoColorPila(tablero &t,int pila,int color){
	bool bandera=false;
	if(obtenerOcupadasPila(t,pila)>0)
		if(obtenerCima(t,pila)==color)
		bandera=true;
	if(obtenerOcupadasPila(t,pila)==0)
		bandera=true;
	return bandera;
}

void anadirPila(tablero &t,int capacidad){
		ponerNumeroPilas(t, obtenerNumeroPilas(t)+1,true);
		ponerCapacidadTableroPila(t,capacidad,obtenerNumeroPilas(t)-1);
	}


