#ifndef _TRIANGULOH_
#define _TRIANGULOH_

#include "HeaderPunto.h"

struct Triangulo {

    struct Punto verticeA;
    struct Punto verticeB;
    struct Punto verticeC;

    };

Triangulo nuevoTriangulo();
double perimetroTriangulo(struct Triangulo);
double areaTriangulo(struct Triangulo);

void imprimirAreaTriangulo(double);
void imprimirPerimetroTriangulo(double);

#endif
