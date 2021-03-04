/* Hernández Toxqui Andrik Tomás
   Grupo: 2EV4
   Programa: "CALCULO DE SUMA DE DOS ENTEROS.cpp"
*/

#include<iostream>
using namespace std;

void Suma(int a, int b);

int main()
{
	cout<< "PROGRAMA QUE CALCULA LA SUMA DE DOS NUMEROS ENTEROS \n\n";
	int N1, N2;
	cout<< "Introduzca el valor del primer operando: ";
	cin>> N1; 
	cout<< "\nIntroduzca el valor del segundo operando: ";
	cin>> N2;
	Suma(N1,N2);
	
	return 0;
}

void Suma(int a, int b)
{
	int c = a + b;
    cout<< "\nEl resultado de "<<a<<" + "<<b<<" es : "<<c<<endl;
}


