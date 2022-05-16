/* la setencia for

for(expr1;expresion logica;expr2){
       conjunto de instrucciones;
   }
   */
   // imprimir el factorial de un numero
 #include <iostream>
 using namespace std;
 
int main (){
	
	int i, numero,factorial=1;
	cout <<"Ingrese un numero:";
	cin>>numero;
	
	for (int i =1;i<=numero;i++)		
	{
	factorial=factorial*i;
    }
cout<<"el factorial de "<< numero << " es :"<< factorial;
	return 0;
    }
