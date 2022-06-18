//Elabore un programa que permita convertir gb a mb, mb a kb,y kb a byte a través de un menú, el cual mostrara las opciones sobre cual conversion deseara realizar//
#include <iostream>
using namespace std;
int main (){
	int opcion;
	cout <<" selecione la conversion que  desea realizar: \n";
	cout <<"1. Gb a Mb\n";
	cout <<"2. Mb a kb\n";
	cout <<"3. Kb a byte\n";
	cout <<"4. Salir\n";
	cin >> opcion;
	switch(opcion){
		case 1:
			int gb, producto1;
			cout << " haz seleccionado Gb a Mb, ingrese los Gb: \n";
			cin >> gb;
			producto1 = gb *1024;
			cout << " el resultado en Mb es: "<<producto1 <<" Mb. \n";
			break;
		case 2:
			int mb, producto2;
			cout << " haz seleccionado Mb a Kb, ingrese los Mb \n";
			cin >> mb;
			producto2 = mb *1024;
			cout << " el resultado en Kb es: "<<producto2 <<" Kb. \n";
			break;
		case 3:
			int kb, producto3;
			cout << " haz seleccionado Kb a Byte, ingrese los Kb: \n";
			cin >> kb;
			producto3 = kb *1024;
			cout << " el resultado en Byte es: "<<producto3 <<" Kb. \n";
			break;
		case 4:
			break;
		default:
			cout <<" valor invalido\n";
			break;		
	}
	return 0;
}
