#include <iostream>
#include<iomanip>
using namespace std;

//Estrategia #9 pag.98//
int main(){
	int a = 0, b = 0, vSumaImpar = 0;
	
	cout<<"Ingrese el primer numero:";
	cin >> a;
	
	cout<<"Ingrese el segundo numero:";
	cin>> b;
	
	if(b <=a)
	{
		cout <<"\n Acci\xazn incorrecta";
	}	
	cout<< setw(33) <<"Numeros Impares"<<endl;
	do{
		if(a % 2 ==0)
		{
			cout<< setw(33) <<a;
			vSumaImpar += a;
		}
		else
		{
		cout <<setw (33) << a << endl;
		vSumaImpar +=a;	
		}
		a += 1;
	}while (a<=b);
	
	cout<<"\n\n total:"<< setw(33) << vSumaImpar <<endl<<endl;
	
	return 0;
}
