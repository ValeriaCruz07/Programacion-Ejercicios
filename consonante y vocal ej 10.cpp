/*Generar un programa que permita ingresar un carácter, e
identifique si es una vocal o una consonante.*/
#include<iostream>
using namespace std;
int main (){
	char l;
	cout << "Ingrese una letra : ";	
	cin >> l;
	switch(l){
	case 'a':
		cout << " La letra ingresa es una Vocal"; break;		
	case 'e':
		cout << " La letra ingresa es una Vocal"; break;		
	case 'i':
		cout << " La letra ingresa es una Vocal"; break;		
	case 'o':
		cout << " La letra ingresa es una Vocal"; break;		
	case 'u':
		cout << " La letra ingresa es una Vocal"; break;		
	default:		
		cout << " La letra ingresa es una Consonante";
	}
	return 0;
}	
	
	

