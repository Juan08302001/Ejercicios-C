#include<cstdlib>
#include <iostream>

using namespace std;

class Circulo
{
private:
    float radio, area, perimetro ;
	
	string nombre;
	
public:
    Circulo() {radio=0; area=0; perimetro=0;}
	void visualizar();
	void calcularArea();
	void calcularPerimetro();
	void setRadio(float ra);	
};
void Circulo::visualizar()
{
	cout<<"Calcular el area y perimetro del circulo"<<endl;
	cout<<"Radio"<<radio<<endl;
	cout<<"Area"<<area<<endl;
	cout<<"Perimetro"<<perimetro<<endl;
}
void Circulo::calcularArea()
{
	area = 3.1416*(radio*radio) ;
}
void Circulo::calcularPerimetro()
{
	perimetro = 2*3.1416*radio;
}
void Circulo::setRadio(float ra)
{
	radio=ra;
}

