#include <iostream>
using namespace std;

long  potenciaDe(int base, int exponente);

int main(){
 int base, exponente;
 long resultado;
 cout<<"ingresa la base: "; cin>>base;
 cout<<"ingresa el exponente: "; cin>>exponente;
 resultado = potenciaDe(base,exponente);
 cout<<"El resultado es: "<<resultado<<endl;
 return 0;
}
