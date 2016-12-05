#include <iostream>
using namespace std;

#define ei 0
#define eu 1
#define ed 2
#define ee 9

void conasteriscos(char ccontrasena[])
{
string contrasena(ccontrasena);
int estado = ei;
int i = 0;
int e;
int n = 0;
for(e=0;e < 3 ; e++)
	switch(estado){
		case ei:
			cout<<"*Estado inicial"<<endl<<endl;
			if(contrasena.length() == 8){
				estado = eu;
			}
			else{

					estado = ee;

			}
			break;
		case eu:
			cout<<"*Estado modificador uno"<<endl<<endl;
			for( i = 0; i < contrasena.length(); i++) 	{
				if(isdigit(ccontrasena[i])==1) {
						estado = ed;
						break;

				}
				else{
				estado = ee;
				}
				}
			break;

		case ed:
			cout<<"*Estado modificador dos";
for( i = 0; i < contrasena.length(); i++) 	{
				if(isdigit(ccontrasena[i])==1) {
					n++;
				}
				else{
				n--;
				}
			}
if(n<8) {		    cout<<"- llegando a su estado final."<<endl<<endl<<endl<<endl;
				    cout<<"Tu contrase�a es correcta"<<endl;
					cout<<"Tu contrase�a es: "<<contrasena;
				break;
				}
			else{
					estado = ee;
				}

		case ee:
			cout<<endl<<endl<<"*Llegando a su estado final."<<endl<<endl<<endl<<endl;
			e = 10;
			cout<<"Contrasena incorrecta"<<endl;

		break;

}
}



int main(){
	char ccontrasena[999];


cout<<"Introduzca una contrase�a que cumpla con las siguientes caracteristicas:"<<endl;
cout<<"1. Contener al menos una letra"<<endl;
cout<<"2. Contener al menos un numero"<<endl;
cout<<"3. Tener 8 caracteres"<<endl<<endl;
cout<<"contrase�a: ";
cin>>ccontrasena;
conasteriscos(ccontrasena);

}
