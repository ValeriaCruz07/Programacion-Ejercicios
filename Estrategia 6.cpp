//Estrategia 6//
#include<iostream>
using namespace std;
int main(){
	int a,b,num=0;
	do{
		cout<<"Ingrese el primer numero:";
		cin>>a;
	}while(a<0);
	do{
		cout<<"Ingrese el segundo numero:";
		cin>>b;
	}while(b<0);
	
	for(int i=1; i<=b; i++){
		num=num+a;
	}
	cout<<"La respuesta total es:"<<num<<endl;
	
	
	return 0;	
}
