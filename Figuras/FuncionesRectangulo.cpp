#include "HeaderRectangulo.h"
#include <iostream>

//Función que crea un nuevo cuadrado a partir de dos vértices opuestos del mismo.
Rectangulo nuevoRectangulo() {
    Rectangulo nuevo;

    std::cout << "Ingrese el x del vertice izquierdo superior del rectangulo: " << std::endl;
    std::cin >> nuevo.verticeIzquierdoSuperior.x;
    std::cout << "Ingrese el y del vertice izquierdo superior del rectangulo: " << std::endl;
    std::cin >> nuevo.verticeIzquierdoSuperior.y;
    std::cout << "Ingrese el x del vertice derecho inferior del rectangulo: " << std::endl;
    std::cin >> nuevo.verticeDerechoInferior.x;
    std::cout << "Ingrese el y del vertice derecho inferior del rectangulo: " << std::endl;
    std::cin >> nuevo.verticeDerechoInferior.y;

    return nuevo;
}

//Función que calcula el lado paralelo al eje x de un rectangulo.
double calcularLadoHorizontalRectangulo(Rectangulo rectangulo) {
    struct Punto verticeDerechoSuperior;

    verticeDerechoSuperior.x = rectangulo.verticeDerechoInferior.x;
    verticeDerechoSuperior.y = rectangulo.verticeIzquierdoSuperior.y;

    return distanciaEntre2Puntos(rectangulo.verticeIzquierdoSuperior, verticeDerechoSuperior);

}

//Función que calcula el lado paralelo al eje y de un rectangulo.
double calcularLadoVerticalRectangulo(Rectangulo rectangulo) {
    struct Punto verticeDerechoSuperior;

    verticeDerechoSuperior.x = rectangulo.verticeDerechoInferior.x;
    verticeDerechoSuperior.y = rectangulo.verticeIzquierdoSuperior.y;

    return distanciaEntre2Puntos(rectangulo.verticeDerechoInferior, verticeDerechoSuperior);
}

//Función que calcula el area de un rectangulo.
double areaRectangulo(Rectangulo rectangulo) {
    return calcularLadoHorizontalRectangulo(rectangulo) * calcularLadoVerticalRectangulo(rectangulo);
}

//Función que calcula el perimetro de un rectangulo.
double perimetroRectangulo(Rectangulo rectangulo) {
    return 2*calcularLadoHorizontalRectangulo(rectangulo) + 2*calcularLadoVerticalRectangulo(rectangulo);
}

//Función que imprime en pantalla el perímetro de un círculo.
void imprimirAreaRectangulo(double area) {
    std::cout << "El area del rectangulo es " << area << "." << std::endl;
    return;
}

//Función que imprime en pantalla el perímetro de un círculo.
void imprimirPerimetroRectangulo(double perimetro) {
    std::cout << "El perimetro del rectangulo es " << perimetro << "." << std::endl;
    return;
}
