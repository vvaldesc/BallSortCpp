/*
 * TADjuego.cpp
 *
 *  Created on: 2 ene. 2021
 *      Author: Víctor Valdés Cobos
 */


#include "TADjuego.h"
#include "entorno.h"


void Juego(juego &j) {
	TipoTecla tecla;
	bool salir = false;
	int pila = 0;
	int y, i, pos, color;
	int bolasXPila, puntos, pilas, pilasSin, deDonde;
	int m[MAX_TAMANO][MAX_TAMANO];
	bool bolaSacada1=false;
	int ocupadas1,pilaAnt;//ocupadas2;
	int contEnter=0;
	int f1=false;


	//Los datos almacenados en el fichero de configuración se copian en las variables
	//definidas anteriormente
	if (entornoCargarConfiguracion(pilas, pilasSin, bolasXPila, deDonde, puntos,m)) {
		iniciarTablero(j.Tablero,pilas+pilasSin);
		//Se abre la ventana gráfica con un número de pilas igual a pilas+pilasSin
		ponerNumeroPilas(j.Tablero,pilas+pilasSin,false);
		entornoIniciar(obtenerNumeroPilas(j.Tablero));
		//se pintan todas las pilas con espacio para almacenar un número de bolas igual a bolasXPila
		ponerCapacidadTablero(j.Tablero,bolasXPila);
		for (i = 0; i < pilas+pilasSin; i++){
			entornoPintarPila(i, obtenerbolasXPilaTablero(j.Tablero));
		}
		pos = 0;
		for (pos = 0; pos < pilas; pos++){
			for (y = 0; y < bolasXPila; y++){
				color=m[pos][bolasXPila-1-y];
				insertarBola(j.Tablero,pos,color);
				entornoPonerBola(pos, color, y, bolasXPila);
			}
		}
		//mostrarPantalla (j.Tablero);
		entornoMarcarPosicion(pila);
		entornoPonerPuntuacion(puntos);
		while (!salir) {
			//A partir de este momento se procesan las teclas que el jugador pulse
			//Si pulsa las teclas izquierda y derecha se desplaza entre las pilas
			//Si se pula la tecla Enter se coloca sobre la pila
			//la bola superior de la pila seleccionada
			//sabemos que el color de esa bola es el 4
			//y que ocupa la posición 3
			//Si pulsa F1 o F2, simplemente aparece un mensaje
			tecla = entornoLeerTecla();
			switch (tecla) {
			case TEnter:
				ocupadas1=obtenerOcupadasPila(j.Tablero,pila);
				//comprueblo si se trata de sacar bola o meter bola
				 if(contEnter%2==0 or contEnter==0){
					 if(obtenerCima(j.Tablero, pila)>0 and obtenerCima(j.Tablero, pila)<9){
					 color=obtenerCima(j.Tablero, pila);
					 	 if(ocupadas1>=1){
					 		 entornoSeleccionarBola(pila, color);
					 		 bolaSacada1=true;
					 	 }
					 	 if(ocupadas1==0){
					 		 puntos=puntos+10;
					 	 }
					entornoPausa(0.5);
					if(obtenerOcupadasPila(j.Tablero,pila)>0){
						entornoQuitarBola(pila , obtenerOcupadasPila(j.Tablero, pila)-1 , obtenerBolasXpila(j.Tablero, pila));
					}
					 sacarBola(j.Tablero, pila);
					 pilaAnt=pila;
				 }
				 }
				 if(contEnter%2!=0 /*and (obtenerOcupadas(j.Tablero, pila)<(obtenerBolasXpila(j.Tablero, pila)))*/){
					 entornoQuitarBolaSeleccion(pilaAnt);
					 if(pilaAnt!=pila){
						 entornoQuitarBolaSeleccion(pila);
					 }
					 	 if(bolaSacada1){
						 	if(obtenerOcupadasPila(j.Tablero, pila)!=obtenerBolasXpila(j.Tablero, pila) and obtenerOcupadasPila(j.Tablero, pila)>=0 and mismoColorPila(j.Tablero, pila, color)){
						 		 insertarBola(j.Tablero, pila, color);
						 		 entornoPonerBola(pila, color,obtenerOcupadasPila(j.Tablero,pila)-1, obtenerBolasXpila(j.Tablero, pila));
						 		 if(pila!=pilaAnt){
						 			 puntos=puntos-10;
						 			 entornoPonerPuntuacion(puntos);
						 		 }
						 	}
						 	else{
					 			 insertarBola(j.Tablero, pilaAnt, color);
					 			 entornoPonerBola(pilaAnt, color,obtenerOcupadasPila(j.Tablero,pilaAnt)-1, obtenerBolasXpila(j.Tablero, pilaAnt));
					 		 }
					 	 }
					// mostrarPantalla(j.Tablero);
					 bolaSacada1=false;
						if(puntos==0 or tableroOrdenado(j.Tablero,pilas)){
							entornoPausa(0.5);
							salir = true;
						}
				 }
				contEnter++;
				//ocupadas2=obtenerOcupadasPila(j.Tablero,pila);
				break;
			case TDerecha:
				entornoDesmarcarPosicion(pila);
				entornoQuitarBolaSeleccion(pila);
				if (pila < (obtenerNumeroPilas(j.Tablero)) -1){
					pila++;
					if(bolaSacada1){
					entornoSeleccionarBola(pila, color);
					}
					entornoMarcarPosicion(pila);
				}
				else{
					pila = 0;
				entornoMarcarPosicion(pila);
				if(bolaSacada1){
				entornoSeleccionarBola(pila, color);
				}
				}
				break;
			case TIzquierda:
				entornoDesmarcarPosicion(pila);
				entornoQuitarBolaSeleccion(pila);
				if (pila > 0){
					pila--;
					if(bolaSacada1){
					entornoSeleccionarBola(pila, color);
					}
					entornoMarcarPosicion(pila);
				}
				else{
					pila = (obtenerNumeroPilas(j.Tablero)) - 1;
					if(bolaSacada1){
					entornoSeleccionarBola(pila, color);
					}
					entornoMarcarPosicion(pila);
				}
				break;
			case TF1:
				if(!f1){
					anadirPila(j.Tablero,bolasXPila);
					pilasSin++;
					entornoPintarPila(i, obtenerbolasXPilaTablero(j.Tablero));
					entornoMostrarMensaje("Ayuda una pila más", 1);
					f1=true;
				}
					//mostrarPantalla(j.Tablero);
				break;
			case TF2:
				entornoMostrarMensaje("Deshacer movimientos", 1);
				break;
			case TSalir:
				salir = true;
				break;
			case TNada:
				break;
			}
		}
		entornoMostrarMensajeFin(" Fin...  ");
		entornoPausa(1.5);
		entornoTerminar();
	}
}

