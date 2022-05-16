/* EN UN ESTACIONAMIENTO COBRAN $3.50 DETERMINE CUANTO DEBE PAGAR UN CLIENTE
POR EL ESTACIONAMIENTO DE SU VEHICULO, CONOCIENDO EL TIEMPO DE DE ESTACIONAMIENTO EN HORAS Y MINUTOS */
	
#include<iostream>

using namespace std;

int main(){

    int horas, minutos;
	float total;
	
	cout<<"ingrese su hora: ";	
	cin>> horas;
	cout<<"ingrese los minutos: ";	
	cin>> minutos;
	
	if(minutos > 0)
	horas++;
	total = horas* 3.50;
	cout<<"el total a pagar por el estacionamiento de su vehiculo es: " <<total<<"$"<<endl;
	
	return 0;
}
