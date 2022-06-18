//Estrategia 1//
#include<iostream>
using namespace std;
int main (){
	int num=20,factorial=1;
	cout<<"Ingrese un numero";
	cin>>num;
	
	for(int i=1;i<=num;i++){
	
		factorial=factorial*i;
}
	cout<<"El factorial es:"<<factorial<<endl;
	
	system("pause");
	return 0;
}
