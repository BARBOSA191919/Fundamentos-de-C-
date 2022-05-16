#include <iostream> // Ambas funciones se encuentran dentro de la libreria iostream
#include <cstdlib>
using namespace std; // Cout y Cin estan contenidas dentro del espacio de nombres std
int variable;
int main(){

cout << "Introduzca un numero" << endl; // Puede cambiar el texto

cin >> variable; // Puede cambiar la variable

cout << "El numero escrito es: " << variable << endl;

system("pause"); // Pausamos el programa para que no se cierre

} 
