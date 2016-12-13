#include <iostream>
using namespace std;

struct Nodo{	
	double valor;
	Nodo *izq;
	Nodo *der;
};

typedef struct Nodo *Arbol; //Creacion del tipo de dato Arbol igual a un puntero a un nodo

Arbol CrearNodo(double x){  //Crea un nuevo nodo, asigna el valor y hace apuntar por izq y der a NULL
	Arbol n = new Nodo;   // Equivalente a Nodo *n= new Nodo; 
	n->valor= x;
    n->der= NULL;
    n->izq= NULL;
	return n;		       
}

void Insertar(Arbol &arbol, double x){  //Inserta el valor enviado y lo ordena en la izquierda si es menor o derecha si es mayor
    if(arbol==NULL)
    {        
		arbol = CrearNodo(x);           
    }
    else if(x > arbol->valor)
        Insertar(arbol->der, x);
    else if(x < arbol->valor)
        Insertar(arbol->izq, x);    
}

bool Buscar(const Arbol &arbol, double x){  //Busca el valor enviado y retorna falso o verdadero segun el resultado
	if(arbol==NULL)
		return false;
	if(arbol->valor==x)
		return true;
	if(arbol->valor>x)
		return Buscar(arbol->izq,x);
	else
		return Buscar(arbol->der,x);	
}

int main(){
	double n,x,z;	
	Arbol arbol;
	arbol=NULL;
				
	cout <<"Ingrese el numero de nodos del arbol: ";
    cin >> n;
    cout << endl;

	for(int i=0; i<n; i++){
        cout << "Ingrese el valor del nodo " << i+1 << ": ";
        cin >> x;
        Insertar(arbol, x);
    }       
        
    cout <<"Ingrese el que desea buscar: ";
    cin >> z;
    cout << endl;
    if(Buscar(arbol, z))
    cout <<"El valor buscado se encuentra en el arbol.\n";
    else
    cout <<"El valor buscado no se encuentra en el arbol.\n";        
}



