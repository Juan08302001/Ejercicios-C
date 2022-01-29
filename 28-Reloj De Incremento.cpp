#include "Reloj.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[])
{
	int opc, opc2=1;
	Reloj R1;
	
	cout<<"Bienvenido a tu reloj"<<endl;
	R1.visualizar();
	
	
	while(opc2==1){
	cout<<"Selecciona una opción"<<endl;
	cout<<"1. incrementar segundo"<<endl;
	cout<<"2. incrementar minuto"<<endl;
	cout<<"3. incrementar hora"<<endl;
	
	cin>>opc;
	
		switch(opc)
		{
			case 1:cout<<"Seleccionaste incrementar segundo"<<endl;
            	   R1.incrementarSegundo();
               	   R1.visualizar();
				   break;
			case 2:cout<<"Seleccionaste incrementar minuto"<<endl;
            	   R1.incrementarMinuto();
               	   R1.visualizar();
			       break;
			case 3:cout<<"Seleccionaste incrementar segundo"<<endl;
               R1.incrementarHora();
               R1.visualizar();
			    break;
			default : cout<<"Opción inexistente"<<endl;
		
		}
		
		cout<<"Deseas regresar al menu presiona 1"<<endl;
		cin>>opc2;	
	};

cout<<endl;
getchar();
system("pause");
return 0;
}

