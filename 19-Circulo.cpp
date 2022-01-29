#include "19.1-Circulo.h"
#include <cstdlib>
#include<iostream>

using namespace std;

int main (int argc, char * arg [] )
{
	
	float ra, area, perimetro;
	string n;
	
	cout<<"Programa para calcular el area y perimetro de un circulo"<<endl;
	cout<<"introduce el radio"<<endl;
	cin>>ra;
	
	Circulo R;
	R.setRadio(ra);
	R.calcularArea();
	R.calcularPerimetro();
	R.visualizar();
	
getchar();
system("pause");
return 0;
}
