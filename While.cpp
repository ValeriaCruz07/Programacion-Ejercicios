//Ejercicio con WHILE//
#include<iostream>
using namespace std;
int main(){
int i=0;
int num;
cout<<"Ingrese un numero: \n";
cin>>num;
	while (i<num){
		if(i%2==0){
		cout<<i<<endl;
		}
		i++;
		}
return 0;
}
