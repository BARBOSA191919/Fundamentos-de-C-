/* CALCULAR LA SUMA DE LOS 100 PRIMEROS NUMEROS NATURALES  */

#include<iostream>

using namespace std;
int main(int argc, char** argv) {
	    int c = 1, suma = 0; 
	    while(c  <= 100)
         {
		    suma = suma +c; 
		       c++; 
		 }
	         cout<<endl;
	         cout<<"sumatoria de 100 numeros: "<<suma<<endl;
	return 0;
}
