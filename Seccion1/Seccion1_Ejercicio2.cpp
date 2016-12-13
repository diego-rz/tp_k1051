/*
*punto 2 de la parte de programadores de la seccion 1 del tp
*Dada una proposicion se ingresan los conectores logicos y se informa si se trata de tautologia, contradiccion o contingencia
*26/07/2016
*/
#include <iostream>
#include <stdio.h>
int main(){
  char conector1, conector2;
  int condicionLogica(char, char);
  char cambiarCaracter(char);

  std::cout << "Dada la siguiente proposición lógica:" << std::endl << "P _ ¬P _ P" << std::endl << "Suponiendo: \'y\' = conjunción lógica, \'o\' = disyunción lógica." << std::endl << "Ingrese los conectores lógicos faltantes:" << std::endl << "Primer conector: ";

  // pide ingresar los dos conectores logicos y evalua que se hayan escrito los datos correctos
  std::cin >> conector1; while(getchar()!='\n'); //el while elimina caracteres adicionales ingresados por el usuario
  std::cout << "Segundo conector: ";
  std::cin >> conector2; while(getchar()!='\n');
  if(conector1 != 'y' and conector1 != 'o') std::cout << "Entrada incorrecta";
  else if(conector2 != 'y' and conector2 != 'o') std::cout << "Entrada incorrecta";

  // escribe la proposicion formada e informa si es contradiccion, tautologia o contingencia
  else{
    std::cout << std::endl << "P " << cambiarCaracter(conector1) << " ¬P " << cambiarCaracter(conector2) << " P" << std::endl << "La proposicion es una ";
    switch (condicionLogica(conector1,conector2)) {
      case 0: std::cout << "contradicción.";break;
      case 1: std::cout << "tautología.";break;
      case 2: std::cout << "contingencia.";break;
    }
  }

  std::cout << std::endl << std::endl;
}

// cambia el caracter 'y' por '^', o el caracter 'o' por 'v'
char cambiarCaracter(char caracter){
  if(caracter == 'y')
    return '^';
  else
    return 'v';
}

// realiza la tabla de verdad de la proposicion con los conectores logicos que se le pasen, retorna 0 en caso de contradiccion, 1 en caso de tautologia y 0 en caso de contradiccion
int condicionLogica(char primerConector, char segundoConector){

  bool p, temp1, temp2;

  // con p verdadera verifico el valor de verdad de la proposicion y guardo el resultado en temp1
  p = true;
  if(primerConector == 'y'){
    temp1 = p and !p;
    if(segundoConector == 'y')
      temp1 = temp1 and p;
    else
      temp1 = temp1 or p;
  }
  else{
    temp1 = p or !p;
    if(segundoConector == 'y')
      temp1 = temp1 and p;
    else
      temp1 = temp1 or p;
  }

  // lo mismo que antes pero con p falsa y guardo el resultado en temp2
  p = false;
  if(primerConector == 'y'){
    temp2 = p and !p;
    if(segundoConector == 'y')
      temp2 = temp2 and p;
    else
      temp2 = temp2 or p;
  }
  else{
    temp2 = p or !p;
    if(segundoConector == 'y')
      temp2 = temp2 and p;
    else
      temp2 = temp2 or p;
  }

  // devuelve 2 en caso de contingencia, sino devuelve el valor de verdad de temp2
  if(temp1 != temp2)
    return 2;
  else
    return temp2;
}
