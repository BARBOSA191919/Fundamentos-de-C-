//escriba un programa que lea de la entrada est�ndar un vector de 
//numeros y muestre en la salida est�ndar los numeros del vectos con sus �ndices asociados.
#include<iostream>

using namespace std;
int main (){
	int numeros[100],n;
	
	cout<<"Digite el numero de elementos que va a tener el arreglo";
	cin>>n;
	for(int i=0,i<n;i++){
		cout<<"Digite un numero:";
		cin>>numeros[i];// guardando todos los elementos del vector
	}
	//ahora,vamos a mostrar los elementos con sus indices asociados
	for(int i=0,i<n;i++){
		cin>>i>>"-> "<<numeros[i];
}
return 0;
}
