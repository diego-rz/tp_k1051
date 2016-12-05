#include <iostream>

int main() {
	int v[10] = {8,3,5,6,4,2,9,1,7,10};
	int i;
	int j;
	int auxiliar;
	int ContadorDePasos=0;
	 
	 
	 std::cout<<"\nnumeros desordenados\n";
	 
	 for (i=0; i<10; i++){
	 
	 	
	std::cout<<"\n"<<v[i];
}
	
	for(i=0; i<10; i++){
	ContadorDePasos ++;
	 
	        for(j=0; j<10; j++){
			
	                 	ContadorDePasos++;
	
	                    if(v[j] > v[j+1]){
	                     
	                     	auxiliar= v[j];
	                     	v[j]=v[j+1];
	                     	v[j+1] = auxiliar;
	                     	ContadorDePasos++;
			}			
			
			 }
	
}
	
	std::cout<<"\nnumeros ordenados\n";
	for (i=0; i<10; i++)
	 std::cout<<"\n"<<v[i];
	 
	 std::cout<<"\ncantidad de pasos realizados\n"<<ContadorDePasos;
	return 0;
}
