//destructo 
#include <iostream>
#include<stdlib.h>
using namespace std;

class perro {
	private:
		string nombre,raza;
		public:
			perro(string,string); //constructor
			~perro(); //destructor
			void mostrardatos();
			void jugar ();		
};

//constructor 
perro::perro(string _nombre,string _raza){
	nombre = _nombre;
	raza = _raza;
}
//desctructor
perro::~perro (){
}
void perro :: mostrardatos(){
	cout<<"nombre: "<<nombre<<endl;
	cout<<"raza: "<<raza<<endl;
}
void perro :: jugar (){
	cout<<" el perro "<<nombre<< " esta jugando "<<endl;
	
}

int main (){
	perro perro1("fido", "doberman");
	
	perro1.mostrardatos();
	perro1.jugar();
	perro1.~perro(); // destruyendo elñ objeto
	
	cout<<" \n";
	system("pause");
	return 0;
}





