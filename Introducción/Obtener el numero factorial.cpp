/* Hernández Toxqui Andrik Tomás
   Grupo: 2EV4
   Programa: "OBTENER EL FACTORIAL DE UN NUMERO.cpp"
*/

#include<iostream>
using namespace std;

int Factorial(int a);

int main()
{
	cout<< "PROGRAMA QUE OBTIENE EL FACTORIAL DE UN NUMERO \n\n";
	int N1;
	cout<< "Introduzca el valor del numero: ";
	cin>> N1;
	int fact= Factorial(N1);
	cout<< "\nEl " <<N1<<"! " "es " <<fact<< endl;
	
	return 0;
}

int Factorial (int a)
{
	int i;
	int resultado= 1;
	for (i=1; i<=a; i++)
	{
		resultado *=i;
	}
	
	return resultado;
}
