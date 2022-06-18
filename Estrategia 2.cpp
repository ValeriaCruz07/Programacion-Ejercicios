//Estrategia 2//
#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int a=0, b=0,vSumarPar=0,vSumarImpar=0;
	cout<<"Ingrese el primer numero:";
	cin>>a;
	
	cout<<"Ingrese el segundo numero:";
	cin>>b;
	cout<<endl<<endl;
	
	if(b>=a){
		cout<<"Accion incorrecta";
		
	}
	cout<<setw(23)<<"Numeros Pares"<<setw(33)<<"Numero Impares"<<endl;
	do
	{
		if(a%2==0)
		{
			cout<<setw(23)<<a;
			vSumarPar +=a;	
	
    }
	else
	{
		cout<<setw(33)<<a<<endl;
		vSumarImpar +=a;
		
	}
	a+=1;
    }while(a<=b);
    cout<<"Totales:"<<setw(15)<<vSumarPar<<setw(33)<<vSumarImpar<<endl<<endl;
    
    system("pause");

	return 0;
}
