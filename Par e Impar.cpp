/*Desarrollar un programa que solicite un n�mero y diga es
Par o Impar.*/
#include<iostream>
using namespace std;
int main (){
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	if(num%2==0){
		cout<<"El numero ingresado es par";
		
	}
	else{
		cout<<"El numero ingresado es impar";
	}
	
	return 0;
}
