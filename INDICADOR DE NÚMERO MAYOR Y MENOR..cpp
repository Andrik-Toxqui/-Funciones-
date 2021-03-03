/* Hernández Toxqui Andrik Tomás
   Grupo: 2EV4
   Programa: "INDICADOR DE NÚMERO MAYOR Y MENOR.cpp"
*/

#include<iostream>
using namespace std;

void Max(int a, int b);

int main()
{
	int N1,N2;
	cout<< "PROGRAMA QUE INDICA EL NÚMERO MAYOR Y MENOR \n\n";
	cout<< "Introduzca el valor del primer numero: ";
	cin>> N1; 
	cout<< "\nIntroduzca el valor del segundo numero: ";
	cin>> N2;
	Max(N1,N2);
	
	return 0;
}

void Max(int a, int b)
{
	if (a>b)
	{
		cout<< "\n" <<a<< " es mayor"<<endl;
	}
	else if (a<b)
	{
		cout<< "\n" <<b<< " es mayor"<<endl;
	}
	else
	cout<< "Error";
    
}


