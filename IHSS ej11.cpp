/*Desarrollar un programa que solicite como dato de entrada el 
sueldo y realice el c�lculo del IHSS, (si el sueldo es menor 
o igual a 9326 lps, se multiplica por el 5%), pero si es 
mayor a 9326 lps se multiplica ese mismo valor (9326 
lps)*5%. El programa deber� realizar el c�lculo a por lo 
menos 20 empleados, de igual forma debe mostrar la suma de 
la deducci�n del IHSS de todos los empleados.
*/
#include <iostream>
using namespace std;
int main(){
	
	int vcontador;
	float vtotalIhss = 0;
	
for(vcontador = 1; vcontador <=20; vcontador++){
		float vIhss, vsalario;
		vIhss = 0;
		vsalario = 0;
		
		cout<<"\n Salario del empleado: ";
		cin>> vsalario;
		
		if (vsalario <= 9326){
			vIhss = vsalario * 0.05;
		}
		else{
			vIhss = 9326 * 0.05;
		}
		 vtotalIhss = vtotalIhss + vIhss;
	}
	
 
	cout<< "Total deducc�ones de Ihss: "<<vtotalIhss <<endl <<endl;
	
	
	system("pause");
	return 0;
}
