/*
relaciones3_1.1.cpp
clasifica materias segun el año al que pertenezcan en el plan
18/11/2016
*/
#include <iostream>
#include<array>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Materia{
  string nombre;
  unsigned nivel;
};

Materia nuevaMateria();


int main() {

  cout << "\nA continuacion se ingresaran los datos de 10 materias que seran clasificadas segun al año de la carrera que correspondan.\nLos nombres de las materias tendran solo una palabra.\nEl año sera de 1 a 3.\n\n";

  array <Materia, 10> plan;

// se ingresa los nombres y los sectores de las personas de a una
  for(short i=0; i<10 ; i++){

    plan.at(i) = nuevaMateria();
    cout << "\n";
  }

// busca a las personas por su numero de sector y las imprime en orden
  for(unsigned j=1 ; j<4 ; j++){
    cout << "Año " << j <<": \n";
    for(unsigned k=0 ; k<10 ; k++){
      if(plan.at(k).nivel == j)
        cout << "  " << plan.at(k).nombre << "\n";
    }
    cout << endl;
  }
  getchar();
}

// funcion que pide al usuario que ingrese los datos de una nueva persona
Materia nuevaMateria(){
  Materia nuevo;
  cout << "Nombre de la materia: ";
  cin >> nuevo.nombre; while(getchar() != '\n');
  do{
    cout << "Año: ";
    cin >> nuevo.nivel; while(getchar() != '\n');
  }while(nuevo.nivel > 3  or  nuevo.nivel < 1); // si el numero de sector ingresado es mayor a 3 vuelve a pedirlo
  return nuevo;
}
