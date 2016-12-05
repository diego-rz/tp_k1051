#include <iostream>
#include <array>

 using std :: cout;
 using std :: cin;
 using std :: endl;
 using std :: array;

 int main()
 {
 	unsigned MenuDeEleccion();

 	unsigned Opcion = MenuDeEleccion();

 	if(Opcion != 0){
 		array <char, 15> IngresoDeCadena();
 	    void CifraDescifraMuestra(array <char, 15>, unsigned);

		CifraDescifraMuestra(IngresoDeCadena(), Opcion);
	}
 }

	unsigned MenuDeEleccion(){

 		cout << "************************" << endl;
 		cout << "* Cifrado / Descifrado *" << endl;
 		cout << "************************" << endl;
 		cout << endl;
 		cout << "< Longitud: 15 caracteres >" << endl;
 		cout << endl;
 		cout << "0. Salir." << endl;
 		cout << "1. Cifrado." << endl;
 		cout << "2. Descifrado." << endl;
 		cout << endl;

 		unsigned Eleccion;

 		cout << "Opcion: ";
 		cin >> Eleccion;

 		while (Eleccion < 0 || Eleccion > 2){
 	    	cout << "* Opcion Incorrecta *" << endl;
 	    	cout << "Opcion: ";
 			cin >> Eleccion;
		}

 		return Eleccion;
	}

    array <char, 15> IngresoDeCadena(){
		cout << endl;
		cout << "Proceda con el ingreso: ";

		array <char, 15> Argumento;

		for(unsigned i = 0; i <= 14; i++)
			cin >> Argumento.at(i);

		return Argumento;
	}

	void CifraDescifraMuestra(array <char, 15> Cadena, unsigned Caso){

		if(Caso == 1){
			cout << "Cifrado: ";
			for(unsigned i = 0; i <= 14; i++)
				Cadena.at(i) = Cadena.at(i) + 5;
		}
		else{
			cout << "Descifrado: ";
			for(unsigned i = 0; i <= 14; i++)
				Cadena.at(i) = Cadena.at(i) - 5;
		}

		for(auto e: Cadena)
			cout << e;
	}
