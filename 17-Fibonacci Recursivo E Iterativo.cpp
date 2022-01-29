#include "17.1-Fibonacci.h"
#include <cstdlib>
#include <iostream>
using namespace std;
int main (int argc, char * arg[] )
{
	int Numero;
cout<<"Programa que calcula n numeros en la sucesion fibonacci"<<endl;
	cout<<"ingresa el numero de la serie:";
	cin>>Numero;
	Fibonacci F(Numero);
	int opc,opc1=1;
		while (opc1==1)
	{
	cout<<"Cual metodo escogeras"<<endl;
	cout<<"1.Iterativo"<<endl;
	cout<<"2.Recursivo"<<endl;
	cout<<"\nELIGA UNA OPCION\n"<<endl;	
		cin>>opc;
	switch (opc)
	{	
	case 1:cout<<"Ha seleccionado el metodo iraterativo"<<endl;
	{
	F.visualizar();
	F.FiboI();
	}
		break;
	case 2:cout<<"Ha seleccionado el metodo recursivo"<<endl;
	{
	F.visualizar();
	for(int i=0; i<= Numero-1; i++)
	{
	cout<<F.FiboR(i)<<" ";
	}
	}
		cout<<"\n";
	break;
	case 3: exit(0);
	default:cout<<"opcion invalida"<<endl;
	}
	cout<<"Si deseas volver a intentar presiona 1"<<endl;
		cin>>opc1;
	}	
	getchar();
	system("pause");
	return 0;	}
