#include <iostream>
using namespace std;
int main(){
    string contra = "Motomami";
    string password;
	cout<<"Ingrese su password:"<<endl;
	cin >> password;
	for(int i=1; i<5; i++){
		if(password == contra){
			cout<<"Contraseña correcta! "<<endl;
			break;
		}else{
			cout<<"Contraseña incorrecta, favor ingresar nuevamente: "<<endl;
			cin>> password;
		}if(i==4){
			cout <<"Haz realizado 5 intentos, tu celular se apagara en 3 segundos, ADIOS"<<endl;
		}
	}
	return 0;
}
