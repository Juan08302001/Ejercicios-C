#include <cstdlib>
#include <iostream>


using namespace std;

class Potencia
{
private:
		int base, exponente, potencia;
public: 
		Potencia(){ base=0; exponente=0; potencia=0;}
		void IngresarValores(int b, int e);
		int generarPotencia(int b, int e);	
		int getBase();
		int getExponente();
    
};
void Potencia :: IngresarValores(int b, int e)
{
	base=b;
	exponente=e;
}
int Potencia :: getBase()
{
return base;
}
int Potencia :: getExponente()
{
	return exponente;
}

int Potencia :: generarPotencia(int b, int e)
{
if(e==0)
return 1;
else
return 	b*generarPotencia(b,e-1);
}











