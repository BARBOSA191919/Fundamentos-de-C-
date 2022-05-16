// ejercicio 1: construya una clase llamada rectangulo que tenga los
//siguientes atributos: largo y ancho, y los siguientes metods: oerimetor(); y area()
#include<iostream>
#include<stdlib.h>
using namespace std;
 class rectangulo {
 	private: //atributos
 	float largo,ancho;
 	public: //metodos
 	rectangulo(float,float);//constructor
 	void perimetro();
 	void area();	
 };
 rectangulo::rectangulo(float _largo, float _ancho){
 	
largo = _largo;
ancho = _ancho; 	
 	
 }
 void rectangulo::perimetro(){
 	float _perimetro;
 	_perimetro = (2*largo) + (2*ancho);
 	cout<<"El perimetro es: "<<_perimetro<<endl;
 	
 }
 
void rectangulo::area(){
 	float _area;
 	_area = largo * ancho;
 	cout<<"El area es: "<<_area<<endl;
 	
}

int main(){
rectangulo r1(11,7);
r1.perimetro ();
r1.area();

    system("pause"); 
	return 0;
	
}











