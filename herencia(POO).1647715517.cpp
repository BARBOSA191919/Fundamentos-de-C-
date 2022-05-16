// Herencia en POO

#include<iostream>
#include<stdlib.h>
using namespace std;

class persona{
	
	private: //atributos
	string nombre;
	int edad;
	public : //metodos
	persona (string,int); //constructor
	void mostrarpersona ();
	
};
class alumno: public persona {
	
	private: // atributos
	string codigoAlumno;
	float notafinal;
	public : //metodos
	alumno(string,int,string,float) //constructor
	void mostraralumno ();	
};
//constructor de la clase persona (la clase padre)
persona :: persona(string _ nombre , int _edad){
	
nombre= _nombre;
edad = _edad;

	
}

alumno::alumno(string _ nombre,int _edad,string_codigoalumno,float _notafinal):persona(_nombre, edad){
codigoalumno = _codigoalumno;
notafinal = _notafinal;

}		
void persona::mostrarpersona(){

	cout<<"nombre :"<<nombre<<endl;
	cout<<"edad :"edad<<endl;
	
}
 void alumno ::mostra alumno (){
 	mostrarpersona();
 	cout<<"codigo alumno: " <<codigoalumno<<endl;
    coutt<<"nota final: "<<notafinal<<endl;

 }

int main (){
	
	alumno alumno1("alejandro",20,"20212200802",15.6);
	alumno1.mostraalumno();
	system("pause");
	return 0;
	
}
