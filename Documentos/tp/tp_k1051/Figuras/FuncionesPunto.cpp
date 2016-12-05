#include "HeaderPunto.h"
#include <math.h>

//Función que calcula la distancia geométrica de dos puntos en el plano.
double distanciaEntre2Puntos(struct Punto puntoA, struct Punto puntoB){
  return
	sqrt(
	     pow(puntoA.x - puntoB.x , 2) +
	     pow(puntoA.y - puntoB.y , 2)
	    );
}

