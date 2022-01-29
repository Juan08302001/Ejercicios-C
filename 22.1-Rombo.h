#include<cstdlib>
#include <iostream>

using namespace std;

class Rombo
{
private:
    float lado, diagonalmenor, diagonalmayor, area, perimetro ;
	
	string nombre;
	
public:
    Rombo() {lado=0; diagonalmenor=0; diagonalmenor=0; area=0; perimetro=0;}
	void visualizar();
	void calcularArea();
	void calcularPerimetro();
	void setLado(float la);
	void setDiagonalmenor(float di);
	void setDiagonalmayor(float dm);	
};
void Rombo::visualizar()
{
	cout<<"Calcular el area y perimetro del rombo"<<endl;
	cout<<"Lado"<<lado<<endl;
	cout<<"Diagonalmenor"<<diagonalmenor<<endl;
	cout<<"Diagonalmayor"<<diagonalmayor<<endl;
	cout<<"Area"<<area<<endl;
	cout<<"Perimetro"<<perimetro<<endl;
}
void Rombo::calcularArea()
{
	area = (diagonalmayor*diagonalmenor)/2;
}
void Rombo::calcularPerimetro()
{
	perimetro = 4*lado;
}
void Rombo::setLado(float la)
{
	lado=la;
}
void Rombo::setDiagonalmenor(float di)
{
	diagonalmenor=di;
}
void Rombo::setDiagonalmayor(float dm)
{
	diagonalmayor= dm;
}
