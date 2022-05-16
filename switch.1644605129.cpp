//condicionales multiples
// imprima una lista de seleccion del 1-5 
#include<iostream>
using namespace std;
int main(){
int numero;	
	cout<<"Digite un numero entre 1-5: ";
	cin>>numero;
	
	switch(numero){
		case 1:cout<<"Es el numeo 1"; break;
       	case 2:cout<<"Es el numeo 2"; break;
		case 3:cout<<"Es el numeo 3"; break;
		case 4:cout<<"Es el numeo 4"; break;
		case 5:cout<<"Es el numeo 5"; break;
        default: cout<<"No esta en el rango del 1-5"; break;
	}
	return 0;
}
