#include "18.1-Potencia.h"
#include <cstdlib>
#include <iostream>

using namespace std;

 
int main (int argc, char * arg[])
{
  //creación de objeto Pot
    Potencia Pot;
	
	Pot.IngresarValores(3,4);  
	cout<<Pot.getBase()<<"elevado a "<<Pot.getExponente()<<"es="<<Pot.generarPotencia(3,4)<<endl;
    
	getchar();
    system("pause");
    return 0;
}
