/*
*Punto 3 de la seccion 1 del trabajo practico
*Dada una proposicion compuesta pide ingresar el valor de verdad de las proposiciones simples y muestra su valor de verdad
*30/7/2016
*/

#include <iostream>
using namespace std;

int main(){
  short P, S, T, J;
  bool verificar(short);

  cout << "Dada la siguiente proposicion:\n\n(P^S^T)v(¬S^¬P^J)\n\nDar los valores de verdad de las proposiciones simples(1=verdadero , 0=falso):\n\n";
  cout << "P: "; cin >> P;
  if(!verificar(P)) {cout<<"Error\n"; return 1;}

  cout << "S: "; cin >> S;
  if(!verificar(S)) {cout<<"Error\n"; return 1;}

  cout << "T: "; cin >> T;
  if(!verificar(T)) {cout<<"Error\n"; return 1;}

  cout << "J: "; cin >> J;
  if(!verificar(J)) {cout<<"Error\n"; return 1;}


  if( (P and S and T) or (!S and !P and J) )
    cout << "\nLa proposicion es verdadera.\n\n";
  else
    cout << "\nLa proposicion es falsa.\n\n";
}

// funcion que devuleve verdadero si se ingreso 1 o 0, y falso en cualquier otro caso
bool verificar(short a){
  if(a<0 or a>1)
    return false;
  else
    return true;
}
