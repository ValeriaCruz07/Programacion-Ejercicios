/*Elaborar un programa que reciba un numero entre el 10 y 15 y mencionar si el
numero ingresado fue elegido, de lo contrario utilizar el default para imprimir, numero igresado esta fuera del rango.*/
#include<iostream>
using namespace std;
int main (){
	int num;
	cout<<"Ingrese un numero entre el 10 y 15"<<endl;
	cin>>num;
	
	switch(num){
		case 11:cout<<"El numero seleccionado es 11"<<endl;
	break;
		case 12:cout<<"El numero seleccionado es 12"<<endl;
	break;
	    case 13:cout<<"El numero seleccionado es 13"<<endl;
	break;
		case 14:cout<<"El numero seleccionado es 14"<<endl;
	break;
	
	default: cout<<"El numero seleccionado esta fuera de servicio";
	break;	
		
	}
	
	return 0;
}

