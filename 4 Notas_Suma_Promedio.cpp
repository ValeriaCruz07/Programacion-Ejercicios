/*Desarrollar un ejercicio que solicite 4 notas y muestre la suma y promedio de dichas notas*/
#include<iostream>
using namespace std;
int main(){
	float num1,num2,num3,num4, promedio,suma;
	
	cout<<"Ingrese la nota de Historia de Honduras"<<endl;
	cin>>num1;
	cout<<"Ingrese la nota de Sociologia"<<endl;
	cin>> num2;
	cout<<"Ingrese la nota de Etica Profesional"<<endl;
	cin>>num3;
	cout<<"Ingrese la nota de Matematica Aplicada"<<endl;
	cin>>num4;
	
	promedio=(num1+num2+num3+num4)/4;
	suma=(num1+num2+num3+num4);
	cout<<"El promedio total es:"<<promedio<<endl;
	cout<<"La suma total es:"<<suma<<endl;
	
	return 0;
}
