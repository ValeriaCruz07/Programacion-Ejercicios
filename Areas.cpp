/*Desarrollar un programa que permita resolver diferente formulas a través de un menú de selección,
 las fórmulas son: Cálculo de área de un Circulo, Calculo del área de un triangulo, Calculo de un rectangulo*/
#include<iostream>
using namespace std;
int main(){
	int opcion;
	cout<<"Selccione la ecuacion que desa encontar el area";
	cout<<"\n 1.Area del triangulo \n 2.Angulo del rectangulo \n 3.Area de un circulo \n ";
	cin>>opcion;
	switch (opcion){
		
		case 1:
			float base, altura;
			float area;
			cout <<"Ingrese la base del triangulo \n";
			cin>> base;
			cout <<"Ingrese la altura del triangulo \n";
			cin>> altura;
			area = (base*altura)/2;
			cout <<"La area del triangulo es: \n"<<area<<endl;
			break;
			
		case 2:
			float base2, altura2;
			float area2;
			cout <<"Ingrese la base del rectangulo \n";
			cin>> base2;
			cout <<"Ingrese la altura del rectangulo \n";
			cin>> altura2;
			area = (base2*altura2)/2;
			cout <<"La area del rectangulo es: \n"<<area2<<endl;
			break;
			
		case 3: 
		    float radio3, area3;
		    float pi = 3.1416;
		    cout<<"Ingrese el radio del circulo \n";
		    cin>> radio3;
		    area3 = (3.1416*radio3*radio3);
		    cout<<"El area del circulo es: \n"<<area3<<endl;
		    break;
		
	}
	return 0;
}
