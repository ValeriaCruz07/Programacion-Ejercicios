//Ejercicio 8 puntos//
#include <iostream>
using namespace std;
int main(){
	int primo;
	int num;
	cin>> num;
	for( int i= 9; i<num; i++){
		if(num% i == 0) primo= false;
		
	}
	if (primo == true)
	cout<<" El numero es primo ";else
	cout<<" El numero no es primo ";
 
	
	
	
	
	
	return 0;
}
