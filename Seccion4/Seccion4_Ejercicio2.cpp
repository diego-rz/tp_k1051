/*
lenguajes2_1.1.cpp
reconocedor sintactico de una estructura else/if
fecha: 18/11/2016
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
  cout << "Ingrese una estructura if/else de la siguiente forma:\n-No se permiten espacios ni saltos de linea\n-Deben estar siempre las llaves( { y } )\n";
  bool automata(void);
  if(automata())
    cout << "La sintaxis es correcta\n";
  else
    cout << "La sintaxis es incorrecta\n";
  getchar();
}

//funcion que pide una cadena y recorre caracter por caracter
// devuelve 0 si encuentra errores, y 1 si la sintaxis es correcta
bool automata(){
  string cadena;
  cin >> cadena;
  unsigned n=0;

  if(cadena.at(n) != 'i') return 0;n++;
  if(cadena.at(n) != 'f') return 0;n++;
  if(cadena.at(n) != '(') return 0;n++;
  while(cadena.at(n) != ')'){
    if(cadena.at(n) == '(' or cadena.at(n) == '{' or cadena.at(n) == '}') return 0;
    n++;
    if(n == cadena.length()) return 0;
  }n++;
  if(cadena.at(n) != '{') return 0;n++;
  while(cadena.at(n) != '}'){
    n++;
    if(n == cadena.length()) return 0;
  }n++;
  if(cadena.at(n) != 'e') return 0;n++;
  if(cadena.at(n) != 'l') return 0;n++;
  if(cadena.at(n) != 's') return 0;n++;
  if(cadena.at(n) != 'e') return 0;n++;
  if(cadena.at(n) != '{') return 0;n++;
  while(cadena.at(n) != '}'){
    n++;
    if(n == cadena.length()) return 0;
  }
  if(n == cadena.length()-1) return 1;

  return 0;

}
