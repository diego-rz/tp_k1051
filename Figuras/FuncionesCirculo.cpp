#include "HeaderCirculo.h"
#include <iostream>
#include <math.h>

//Función para crear un nuevo círculo a partir del centro y de un punto cualquier del mismo.
Circulo nuevoCirculo(){
    struct Circulo nuevo;

    std::cout << "Ingrese el x del centro del circulo: " << std::endl;
    std::cin >> nuevo.centro.x;
    std::cout << "Ingrese el y del centro del circulo: " << std::endl;
    std::cin >> nuevo.centro.y;

    std::cout << "Ingrese el x de un punto frontera del circulo: " << std::endl;
    std::cin >> nuevo.puntoFrontera.x;
    std::cout << "Ingrese el y de un punto frontera del circulo: " << std::endl;
    std::cin >> nuevo.puntoFrontera.y;

    return nuevo;
}

//Función que devuelve el area de un círculo.
double areaCirculo(Circulo circulo) {
    return (M_PI)*pow(distanciaEntre2Puntos(circulo.centro, circulo.puntoFrontera), 2);
}

//Función que devuelve el perímetro de un círculo.
double perimetroCirculo(Circulo circulo) {
    return 2*M_PI*distanciaEntre2Puntos(circulo.centro, circulo.puntoFrontera);
}

//Función que imprime en pantalla el area de un circulo.
void imprimirAreaCirculo(double area) {
    std::cout << "El area del circulo es " << area << "." << std::endl;
    return;
}

//Función que imprime en pantalla el perímetro de un círculo.
void imprimirPerimetroCirculo(double perimetro) {
    std::cout << "El perimetro del circulo es " << perimetro << "." << std::endl;
    return;
}
