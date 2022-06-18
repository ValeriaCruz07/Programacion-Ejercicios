//Estrategia 7//
#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3=1;
	cout<<"Ingrese el primer numero:";
	cin>>num1;
	cout<<"Ingrese el segundo numero:";
	cin>>num2;
	
	
	for(int i=2; i<=11;i++){
		while(num1%i==0&&num2%i==0){
			num3 *=i;
			num1=num1/i;
			num2=num2/i;
		}
	}
	

	cout<<num3<<endl;



	return 0;
}
