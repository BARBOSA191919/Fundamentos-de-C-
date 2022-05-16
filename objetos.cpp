//PROGRAMACION ORIENTADA A OBJETOS

#include <iostream>
#include<stdlib.h>
using namespace std;

class persona{
	private: //atributos
	int edad;
	string nombre;
	public:// metodos
	persona(int,string); // Constructor
	void leer();
	void correr ();
};
//Constructor son sirve para inicializar los atributos	
persona:: persona(int _edad,string _nombre){
	
edad= _edad;
nombre= _nombre;		
}	

void persona::leer(){
	cout<<"soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}
void persona::correr(){
	cout<<"soy "<<nombre<<" y estoy corriendo una maraton"<<endl;	
	
}
int main (){
	
persona p1 = persona (20,"Alejandro");
persona p2 (19,"Maria");
persona p3 (21,"Juan");

p1.leer();
p2.correr();

p3.leer();
p3.correr();

	system("pause");
	return 0;
}
