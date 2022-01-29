#include "21.1-Triangulo.h"
#include <cstdlib>
#include<iostream>

using namespace std;

int main (int argc, char * arg [] )
{
	
	float la, al , ba, area, perimetro;
	string n;
	
	cout<<"Programa para calcular el area y perimetro de un triangulo"<<endl;
	cout<<"introduce el lado3 del triangulo"<<endl;
	cin>>la;
	cout<<"introduce la base del triangulo"<<endl;
	cin>>ba;
	cout<<"introduce la altura del triangulo"<<endl;
	cin>>al;
	
	Triangulo T;
	T.setLado3(la);
	T.setBase(ba);
	T.setAltura(al);
	T.calcularArea();
	T.calcularPerimetro();
	T.visualizar();
	
getchar();
system("pause");
return 0;
}
