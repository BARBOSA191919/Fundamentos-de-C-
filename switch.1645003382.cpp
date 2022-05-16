//programa que realiza la suma, resta, multiplicacion
//y la division de  dos numeros

#include<iostream>
using namespace std;
int main(){
int  pos,num1,num2,resultado;

cout<<"Ingrese la opcion deseada."<<endl;
cout<<" 1-. SUMA"<<endl;
cout<<" 2-. RESTA"<<endl;
cout<<" 3-. MULTIPLICACION"<<endl;
cout<<" 4-. DIVISION"<<endl;
cin>> pos;

switch (pos){
	
	case 1:
		cout<<"\n SUMA. \n "<<endl;
		cout<<"Ingrese los numeros a sumar:\n "<<endl;
		cout<<"primer numero: ";
		cin>>num1;
	cout<<"segundo numero: ";
		cin>>num2;
		resultado=num1+num2;
		cout<<"\n Resultado: "<<resultado<<endl;
		break;
		
	case 2:
		cout<<"\n RESTA.\n "<<endl;
		cout<<"Ingrese los numeros a restar:\n "<<endl;
		cout<<"primer numero: ";
		cin>>num1;
	cout<<"segundo numero: ";
		cin>>num2;
		resultado=num1-num2;
		cout<<"\n Resultado: "<<resultado<<endl;
	break;
	
	case 3:
		cout<<"\n MULTIPLICACION.\n "<<endl;
		cout<<"Ingrese los numeros a multiplicar:\n "<<endl;
		cout<<"primer numero: ";
		cin>>num1;
	cout<<"segundo numero: ";
		cin>>num2;
		resultado=num1*num2;
		cout<<"\n Resultado: "<<resultado<<endl;
	break;
	
		case 4:
		cout<<"\n DIVISION.\n "<<endl;
		cout<<"Ingrese los numeros a dividir:\n "<<endl;
		cout<<"primer numero: ";
		cin>>num1;
	cout<<"segundo numero: ";
		cin>>num2;
		resultado=num1/num2;
		cout<<"\n Resultado: "<<resultado<<endl;
		break;
		
	 default:
	cout<<"\n Opcion no valida";
	break;
}
return 0;
}
