#include "20.1-Cuadrado.h"
#include <cstdlib>
#include<iostream>

using namespace std;

int main (int argc, char * arg [] )
{
	
	float al, ba, area, perimetro;
	string n;
	
	cout<<"Programa para calcular el area y perimetro de un cuadrado"<<endl;
	cout<<"introduce la altura del cuadrado"<<endl;
	cin>>al;
	cout<<"introduce la base del cuadrado"<<endl;
	cin>>ba;
	
	Cuadrado C;
	C.setAltura(al);
	C.setBase(ba);
	C.calcularArea();
	C.calcularPerimetro();
	C.visualizar();
	
getchar();
system("pause");
return 0;
}
