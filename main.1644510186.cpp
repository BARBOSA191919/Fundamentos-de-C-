#include <iostream>


using namespace std;

string texto;

int main(){


cout << "Introduzca un texto" << endl; 

getline (cin,texto); // Observe como se utiliza cin

cout << "El texto escrito es: " << texto << endl;


system("pause");
}

