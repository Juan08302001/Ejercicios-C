#include "26.1-Busqueda Secuencial.h"
#include <iostream>
#define MAX 50
#include<fstream>
#include <cstdlib>

using namespace std;
int main (int argc, char * arg[])
{
	BusquedaSecuencial BS;
  int i,j;
   	cout<<"Ingrese el valor que desea verificar y buscar en el archivo de texto"<<endl;
    cin>>i;
    cout<<"Confirma el numero a buscar"<<endl;
    cin>>j;
    if(i!=j){
    system("cls");
    cout<<"no coinciden los valores intetalo nuevamente"<<endl;
    }
	else
	{
	BS.BusquedaSec(i);
	}
    while(i!=j);
					  	 
getchar();
system("pause");
return 0;	
}
	
