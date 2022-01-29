#include <iostream>
using namespace std;
typedef int TipoDeDato;
#include "29.1-Cola.h"
int main()
{
int opc;
int B;
ColaLineal cola;
TipoDeDato x;
const TipoDeDato fin=-1;
do{
try{
	cout<<"Programa de la cola"<<endl;
	cout<<" "<<endl;
	cout<<"1.insertar elemento"<<endl;
	cout<<"2. eliminar elementos"<<endl;
	cout<<"3. mostrar frente"<<endl;
	cout<<"4. mostrar cola"<<endl;
	cout<<"5.salir"<<endl;
	cin>>opc;
	switch(opc)
	{
	case 1:cout<<"insertar elementos"<<endl;
	{
     do{
            cin>>x;
            cola.insertar(x);
        }while(x!=fin);
      cout<<"Elementos de la cola: ";
       while(!cola.colaVacia())
       {
            x=cola.quitar();
            cout<<x<<" ";
       }
	}
	break;
	case 2:cout<<"eliminar elementos"<<endl;
	{
	cout<<"elemento eliminado num: "<<endl;
	x=cola.quitar();
	}
	break;
	
	case 3:cout<<"mostrar elementos en la frente"<<endl;
	{
	cout<<"el frente es: "<<endl;
	x=cola.frenteCola();	
	cout<<cola.frenteCola();
	}	
	break;
	
	case 4:cout<<"mostrar cola"<<endl;
	{
	cola.mostrarCola();	
	}
	break;
	
	case 5: exit(0);
	
	default:cout<<"opcion invalida"<<endl;			
	}
}

 catch(const char * error)
    {
        cout<<"excepción: "<<error<<endl;
    }
 cout<<" si deseas regresar presiona 1"<<endl;
	cin>>B;
	system ("cls");
}while(B==1);
system("pause");
}
