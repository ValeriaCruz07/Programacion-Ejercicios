#include<iostream>
using namespace std;
int main (){
	int a,div=0,suma=0;
	cout<<"Ingrese un numero:";
	cin>>a;
	
	for(int i=1;i<a;i++){
		if (a%i==0){
		div=i;
		suma+=div;
		}
	}
	if(suma==a){
	
	cout<<"El numero digitado es perfecto"<<endl;
	}
	
	else {
	cout<<"El numero digitado no es perfecto"<<endl;

}
	
	
	return 0;
}
