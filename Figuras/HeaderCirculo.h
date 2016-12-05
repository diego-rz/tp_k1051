#ifndef _CIRCULOH_
#define _CIRCULOH_

#include "HeaderPunto.h"

struct Circulo {
    struct Punto centro;
    struct Punto puntoFrontera;
};

Circulo nuevoCirculo();
double areaCirculo(Circulo );
double perimetroCirculo(Circulo );
void imprimirAreaCirculo(double);
void imprimirPerimetroCirculo(double);

#endif
