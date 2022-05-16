// metodos constructores y modificadores(getters y setters)

#include<iostream>
#include<stdlib.h>
using namespace std;

class punto {
	private:
	int x,y;
	public :
	punto();	
	void setpunto(int,int);
	int getpuntox();
	int getpuntoy();
};

punto::punto(){	
}
//establecemos valores a los atributos
void punto::setpunto(int _x, int _y){
	x = x;
	y = y;
		
}
int punto::getpuntox(){
return x;
}
int punto::getpuntoy(){
	return y;
}

int main (){
	punto punto1;
	punto1.setpunto(15,10);
	cout<<punto1.getpuntox()<<endl;
	cout<<punto1.getpuntoy()<<endl;
	

	system("pause");
	return 0;	
}





