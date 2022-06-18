/* Desarrollar un programa que solicite 
una serie de números y al ingresar
//CERO finalice, al terminar que muestre
cual fue el número mayor ingresado*/

#include<iostream> 
using namespace std;
int main (){
	
	int numero, mayor, contador = 0;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    mayor = numero;
    
    while (numero != 0)
    {
        contador++;
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero > mayor)
        {
            mayor = numero;
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero de numeros ingresados es: " << contador << endl;
   
   
   
   
    
	return 0;
}
