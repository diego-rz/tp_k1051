#include <iostream>
#include "HeaderCirculo.h"
#include "HeaderRectangulo.h"
#include "HeaderTriangulo.h"

int main()
{
    int eleccion;

    while(1)
    {
    std::cout << "Elegir una figura: " << std::endl;
    std::cout << "1 - Circulo." << std::endl;
    std::cout << "2 - Triangulo." << std::endl;
    std::cout << "3 - Rectangulo." << std::endl;

    std::cin >> eleccion;

    switch(eleccion)
    {
        case 1:
            {
                Circulo figuraCirculo;
                figuraCirculo = nuevoCirculo();
                imprimirAreaCirculo(areaCirculo(figuraCirculo));
                imprimirPerimetroCirculo(perimetroCirculo(figuraCirculo));
                break;
            }
        case 2:
            {
                Triangulo figuraTriangulo;
                figuraTriangulo = nuevoTriangulo();
                if(!(esTriangulo(figuraTriangulo))) {std::cout << "No forma un triangulo. Elija nuevamente." << std::endl; break;}
                imprimirAreaTriangulo(areaTriangulo(figuraTriangulo));
                imprimirPerimetroTriangulo(perimetroTriangulo(figuraTriangulo));
                break;
            }
        case 3:
            {
                Rectangulo figuraRectangulo;
                figuraRectangulo = nuevoRectangulo();
                imprimirAreaRectangulo(areaRectangulo(figuraRectangulo));
                imprimirPerimetroRectangulo(perimetroRectangulo(figuraRectangulo));
                break;
            }
        default:
            std::cout << "Invalido. Elija nuevamente." << std::endl;
            break;
    }
    }
}
