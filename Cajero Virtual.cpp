/*Desarrollar un programa que genere un cajero autom�tico
virtual */
#include <iostream>
using namespace std;
int main(){
int saldo_inicial= 1000,opc;
float extra, saldo, retirar = 0;
cout<<"\tbienvenidos a su Cajero Virtual ";
cout<<" 1.Ingresar dinero en cuenta " <<endl;
cout<<" 2.Retirar Dinero de la cuenta "<<endl;
cout<<" 3.Salir "<<endl;
cout<<" opcion ";
cin>>opc;

switch(opc){
case 1:
cout<<" Digite la cantidad de dinero a ingresar: ";
cin>>extra;
saldo = saldo_inicial + extra;
cout<< " Dinero en cuenta "<<saldo;
break;

case 2:
cout<<" Digite la cantidad de dinero que va a retirar: ";
cin>>retirar;
if(retirar> saldo_inicial){
cout<<" No tiene esa cantidad d dinero";
break;
}
else{
saldo = saldo_inicial-retirar;
cout<<" Dinero en cuenta: "<<saldo;

}
case 3:
break;
}


return 0;
}
