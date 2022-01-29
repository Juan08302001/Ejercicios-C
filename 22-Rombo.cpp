#include "22.1-Rombo.h"
#include <cstdlib>
#include<iostream>

using namespace std;

int main (int argc, char * arg [] )
{
	
	float la, dm , di, area, perimetro;
	string n;
	
	cout<<"Programa para calcular el area y perimetro de un rombo"<<endl;
	cout<<"introduce el lado del rombo"<<endl;
	cin>>la;
	cout<<"introduce la diagonal mayor del rombo"<<endl;
	cin>>dm;
	cout<<"introduce la diagonal menor del rombo"<<endl;
	cin>>di;
	
	Rombo R;
	R.setLado(la);
	R.setDiagonalmayor(dm);
	R.setDiagonalmenor(di);
	R.calcularArea();
	R.calcularPerimetro();
	R.visualizar();
	
getchar();
system("pause");
return 0;
}
