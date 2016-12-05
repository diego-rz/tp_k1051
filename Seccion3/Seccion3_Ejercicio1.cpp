/*
grafos1_1.0.cpp
2/11/2016
punto 1 de la seccion 3 del trabajo practico
*/

#include<iostream>
#include<array>

using namespace std;

// funciones
template <typename tipo, size_t n>
tipo MenorValor(array<tipo,n>, const array<bool,n> &);

template <size_t n>
void ActualizarLongitudes(array<int, n> &, array<int, n> &, const array<bool,n> &, const array<int,n> &, int);

void ObtenerValores(int &, int &);

template <size_t n>
void ArmarMatriz(array<array<int, n>, n> &);

template <size_t n>
void TestArmarMatriz(array<array<int, n>, n> &);

#define NUM 5

int main(){

  array < array <int,NUM> ,NUM> matriz;
  array <int,NUM> longitud;
  array <bool,NUM> recorrido;
  array <int, NUM> huella;

  for(int i=0 ; i<NUM ; i++){
    longitud.at(i) = 5000;
    recorrido.at(i) = true;
  }

  // Armo la matriz de adyacencia del grafo que se va a utilizar
  ArmarMatriz(matriz);
  cout << "Matriz de adyacencia:\n";
  TestArmarMatriz(matriz);
  cout << endl;

  // obtengo el punto de inicio y de fin, pongo la longitud hasta inicio en 0
  int v=0, inicio, fin;
  ObtenerValores(inicio,fin);
  longitud.at(inicio) = 0;

  // aplico el algoritmo de dijkstra
  while(recorrido.at(fin)){
    v = MenorValor(longitud, recorrido);
    recorrido.at(v) = false;
    ActualizarLongitudes(longitud, huella, recorrido, matriz.at(v), v);
  }


  cout << "Longitud minima: " << longitud.at(fin) << endl;
  /*
  // MostrarCamino(huella);
  */
}

// funcion que devuelve el indice que contiene el menor valor de un arreglo si el mismo indice esta como true en recorrido.
template <typename tipo, size_t n>
tipo MenorValor(array<tipo,n> longitud, const array<bool,n> &recorrido){
  // selecciono primeramente un valor q en recorrido sea true
  int v = 0;
  for(int i=0 ; i<n and !v ; i++)
    if(recorrido.at(i))
      v = i;

  // busco el menor valor de longitud
  for(int i=0 ; i<n ; i++){
    if(longitud.at(i) < longitud.at(v) and recorrido.at(i))
    v = i;
  }
  return v;
}

// funcion que va a actualizando las longitudes minimas temporales segun el algoritmo de dijkstra
// v representa el vertice que se esta considerando en ese momento, matrizEnV representa sus vertices adyacentes
template <size_t n>
void ActualizarLongitudes(array<int, n> &longitud,
                          array<int, n> &huella,
                          const array<bool,n> &recorrido,
                          const array<int,n> &matrizEnV,
                          int v){
    for(int i=0 ; i<n ; i++){
      if(recorrido.at(i) and matrizEnV.at(i)){
        if(longitud.at(i) > longitud.at(v)+matrizEnV.at(i)){
          huella.at(i) = v;
          longitud.at(i) = longitud.at(v)+matrizEnV.at(i);
        }
      }
    }
  }

  void ObtenerValores(int &inicio, int &fin){
    cout << "Vertice de inicio (0 a 4): ";
    cin >> inicio;
    cout << "Vertice de fin (0 a 4): ";
    cin >> fin;
  }

  template <size_t n>
  void ArmarMatriz(array<array<int, n>, n> &matriz){
    // pone la matriz en 0
    for(int i=0 ; i<n ; i++)
      for(int j=0 ; j<n ; j++)
        matriz.at(i).at(j) = 0;

    matriz.at(0).at(1) = 15;
    matriz.at(0).at(4) = 13;
    matriz.at(0).at(3) = 17;
    matriz.at(1).at(2) = 7;
    matriz.at(2).at(3) = 5;
    matriz.at(2).at(4) = 22;

    // copia los valores de arriba en su valor inverso(i,j en j,i)
    for(int i=0 ; i<n ; i++)
      for(int j=0 ; j<n ; j++)
        matriz.at(j).at(i) = matriz.at(i).at(j);
  }

  template <size_t n>
  void TestArmarMatriz(array<array<int, n>, n> &matriz){
    for(int i=0 ; i<n ; i++){
      for(int j=0 ; j<n ; j++)
        cout << matriz.at(i).at(j) << "\t";
      cout << endl;
    }
  }
