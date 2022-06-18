//cree un programa que muestre todos los sueldos dentro del array y la suma de esto. en este ejempo creara un array que tiene los siguientes sueldo{5000,6000,7890,15000,16780,10000,9000}/
#include <iostream>
using namespace std;
int main(){
int vSueldos [] = {5000,6000,7890,15000,16780,10000,9000}; //Arreglo de 7 elementos
	int vSuma = 0;
	cout<<"***Mostrar los sueldos****"<<endl;
	for(int i = 0; i < 7;i++){
		// Mostrar el valor que tenga la posiscion 1 en vSueldos
	    cout<< vSueldos [i]<<endl;	 
	    //Incrementar el valor de vSuma de la posicio i en vSueldos//
	    vSuma = vSuma + vSueldos[i];
	}      
	                                
	 	cout<<"\n--------Suma de Sueldos--------"<<endl;
        cout<<"La suma de los sueldos es: "<<vSuma<<endl;
	return 0;
}
