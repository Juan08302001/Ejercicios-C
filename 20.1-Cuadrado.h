#include<cstdlib>
#include <iostream>

using namespace std;

class Cuadrado
{
private:
    float altura, base, area, perimetro ;
	
	string nombre;
	
public:
    Cuadrado() {altura=0; base=0; area=0; perimetro=0;}
	void visualizar();
	void calcularArea();
	void calcularPerimetro();
	void setAltura(float al);
	void setBase(float ba);	
};
void Cuadrado::visualizar()
{
	cout<<"Calcular el area y perimetro del cuadrado"<<endl;
	cout<<"Altura"<<altura<<endl;
	cout<<"Base"<<base<<endl;
	cout<<"Area"<<area<<endl;
	cout<<"Perimetro"<<perimetro<<endl;
}
void Cuadrado::calcularArea()
{
	area = altura*base;
}
void Cuadrado::calcularPerimetro()
{
	perimetro = 4*altura;
}
void Cuadrado::setAltura(float al)
{
	altura=al;
}
void Cuadrado::setBase(float ba)
{
	base=ba;
}
