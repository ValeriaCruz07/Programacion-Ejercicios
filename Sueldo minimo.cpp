/*Realizar un programa que reciba 
el sueldo base de una
persona y muestre si esta persona 
gana más del sueldo
mínimo*/
#include<iostream> 
using namespace std;
int main (){
	
	
float sueldo, sueldoMin;
    cout << "Ingrese el sueldo base: ";
    cin >> sueldo;
    cout << "Ingrese el sueldo minimo: ";
    cin >> sueldoMin;
    if (sueldo > sueldoMin)
    {
        cout << "La persona gana mas del sueldo minimo";
    }
    else
    {
        cout << "La persona gana menos del sueldo minimo";
    }	



	return 0;
}
