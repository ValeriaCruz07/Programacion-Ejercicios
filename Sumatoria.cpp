//Elaborar un programa que muestre la sumatoria de los números entre 1 y 15//
#include <iostream>
using namespace std;
int main (){
	int i , suma;
	suma = 0;
	
	for(int i=0; i<= 15; i++){
		suma += i;
	}
	cout<<"La suma total es: "<<suma<<endl;
	return 0;
}
