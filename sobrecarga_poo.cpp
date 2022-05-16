//sobrecarga de constructores
#include<iostream>
#include<stdlib.h>
using namespace std;

class fecha {
	private: //atributo
		int dia,mes,anio;
		public: //metodos
		fecha(int,int,int); //constructor1
		fecha(long); //constructor 2
		void mostrarfecha();
		
};

fecha::fecha(int _dia,int _mes,int _anio){
	anio= _anio;
	mes = _mes;
	dia = _dia;
}
//constructor 2
fecha:: fecha(long fecha){

anio = int (fecha/10000); //extraer el año
mes = int ((fecha-anio*10000)/100); //extraer el mes
dia = int (fecha-anio *10000-mes*100); // extraer el dia
}
void fecha:: mostrarfecha(){
	cout<<"la fecha es: "<<dia<<"/"<<mes<<"/"<<ani o<<endl;
}

int main(){
	fecha hoy (14,03,2022);
	fecha ayer (20220313);
	
	hoy.mostrarfecha();
	ayer.mostrarfecha();
	
	system ("pause");
	return 0;
}
