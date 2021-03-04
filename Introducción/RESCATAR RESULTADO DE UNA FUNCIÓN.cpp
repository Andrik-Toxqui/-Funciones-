/* Hernández Toxqui Andrik Tomás
   Grupo: 2EV4
   Programa: "RESCATAR RESULTADO DE UNA FUNCIÓN.cpp"
*/

#include<iostream>
using namespace std;

int Max(int a, int b);

int main()
{
	cout<< "PROGRAMA QUE RESCATA RESULTADO DE UNA FUNCION \n\n";
	int N1,N2,N3;
	cout<< "Introduzca el valor del primer numero: ";
	cin>> N1; 
	cout<< "\nIntroduzca el valor del segundo numero: ";
	cin>> N2;
	cout<< "\nIntroduzca el valor del tercer numero: ";
	cin>> N3;
	int max1 = max(N1,N2);
	int max2 = max(max1,N3);
	cout<< "\n El numero mayor es " <<max2<<endl;
	
	return 0;
}

int Max(int a, int b)
{
	int c;
	if (a>b)
	{
		c = a;
	}
	else
	{
		c = b;
	}
	
	return c;
}
