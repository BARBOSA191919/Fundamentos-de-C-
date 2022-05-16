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
	string codigoalumno;
	float notafinal;
	public : //metodos
	alumno(string,int,string,float); //constructor
	void mostraralumno ();	
};
//constructor de la clase persona (la clase padre)
persona::persona(string _nombre , int _edad){
	
nombre= _nombre;
edad = _edad;

	
}

alumno::alumno(string _nombre,int _edad,string _codigoalumno,float _notafinal): persona(_nombre,_edad){
codigoalumno=_codigoalumno;
notafinal=_notafinal;

}		
void persona::mostrarpersona(){

	cout<<"nombre :"<<nombre<<endl;
	cout<<"edad :"<<edad<<endl;
	
}
 void alumno ::mostraralumno (){
 	mostrarpersona();
 	cout<<"codigo alumno: " <<codigoalumno<<endl;
    cout<<"nota final: "<<notafinal<<endl;

 }

int main (){
	
	alumno alumno1("alejandro",20,"20212200802",4.5);
	alumno1.mostraralumno();
	system("pause");
	return 0;
	
}
