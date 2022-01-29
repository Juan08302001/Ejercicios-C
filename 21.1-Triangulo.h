#include<cstdlib>
#include <iostream>

using namespace std;

class Triangulo
{
private:
    float lado3, base, altura, area, perimetro ;
	
	string nombre;
	
public:
    Triangulo() {lado3=0; base=0; altura=0; area=0; perimetro=0;}
	void visualizar();
	void calcularArea();
	void calcularPerimetro();
	void setLado3(float la);
	void setBase(float ba);
	void setAltura(float al);	
};
void Triangulo::visualizar()
{
	cout<<"Calcular el area y perimetro del triangulo"<<endl;
	cout<<"Lado3"<<lado3<<endl;
	cout<<"Base"<<base<<endl;
	cout<<"Altura"<<altura<<endl;
	cout<<"Area"<<area<<endl;
	cout<<"Perimetro"<<perimetro<<endl;
}
void Triangulo::calcularArea()
{
	area = (base*altura)/2;
}
void Triangulo::calcularPerimetro()
{
	perimetro = lado3+base+altura;
}
void Triangulo::setLado3(float la)
{
	lado3=la;
}
void Triangulo::setBase(float ba)
{
	base=ba;
}
void Triangulo::setAltura(float al)
{
	altura= al;
}
