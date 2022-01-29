#include "23.1-Metodo Burbuja.h"
#include "23.2-Metodo QuickSort.h"
#include "23.3-Metodo ShellSort.h"
#include "23.4-Metodo Radix.h"
#include <iostream>
#include <cstdlib>

using namespace std;
int main (int argc, char * arg[])
{
	int opci,opc, opc2;
	int lon,n, b;
	system("color 57");
	MetodoBurbuja MB;
	MetodoQuickSort MQ;
	ShellSort MS;
	Radix R;
	cout<<"Bienvenido al programa general de ordenamiento"<<endl;
	do
	{
		cout<<"Selecciona una opcion"<<endl;
		cout<<"1. Metodo burbuja"<<endl;
		cout<<"2. Metodo QuickSort"<<endl;
		cout<<"3. Metodo ShellSort"<<endl;
		cout<<"4. Metodo Radix"<<endl;
		cout<<"5. Salir"<<endl;
		cin>>opc;
		
        switch(opc)
        {
        	case 1:cout<<"Seleccionaste Metodo Burbuja"<<endl;
        	{
        		
				
        		cout<<"Ingresa Numero De Elmentos A Capturar: "; 
	                cin>>lon; 
	                int arr[lon]; 
		            for(int i=0; i<lon; i++)
		               { 
                        cout<<"Ingresa El Elemento "<<i+1<<": "; 
                        cin>>n; 
                        arr[i]=n; 
                        }
						do{
						
        		cout<<"Selecciona tu opcion preferida"<<endl;
        		cout<<"1. Forma ascendente"<<endl;
        		cout<<"2. Forma descendete"<<endl;
        		cin>>opci;
        		switch(opci)
        		{
        		case 1:cout<<"Seleccionaste la forma ascendente"<<endl;
        			MB.OrdenarAs(arr,lon);
        			break;
        		case 2:cout<<"Seleccionaste la forma descendente"<<endl;
				    MB.OrdenarDe(arr,lon);
					break;
					default:cout<<"Opcion inexistente"<<endl;	
				}
				 cout<<"Deseas regresar al menu de burbuja presiona 1"<<endl;
				 cin>>opc2;
				}while(opc2==1);
			}
			break;
			case 2:cout<<"Seleccionaste Metodo QuickSort"<<endl;
			{
				cout<<"Ingresa Numero De Elmenetos A Capturar: "; 
	                cin>>lon; 
	                int arr[lon]; 
		            for(int i=0; i<lon; i++)
		               { 
                        cout<<"Ingresa El Elemento "<<i+1<<": "; 
                        cin>>n; 
                        arr[i]=n; 
                        } 
                    do{
				cout<<"Selecciona tu opcion preferida"<<endl;
				cout<<"1. Forma ascendente"<<endl;
				cout<<"2. Forma descendente"<<endl;
				cin>>opci;
				switch(opci)
				{
				case 1:cout<<"Seleccionaste la forma ascendente"<<endl;
				     MQ.OrdenarAs(arr,lon);
				     MQ.quicksort(arr,lon,1);
				     break;
				case 2:cout<<"Seleccionaste la forma descendente"<<endl;
				     MQ.OrdenarDe(arr,lon);
				     MQ.quicksort(arr,1,lon);
				     break;
				     default:cout<<"Opcion inexistente"<<endl;
				}
				cout<<"Deseas regresar al menu de QuickSort presiona 1"<<endl;
				 cin>>opc2;
				}while(opc2==1);
			}
			break;
			case 3:cout<<"Seleccionaste Metodod Shellsort"<<endl;
			{
					cout<<"Ingresa Numero De Elmenetos A Capturar: "; 
	                cin>>lon; 
	                int arr[lon]; 
		           
                    do{
			    cout<<"Selecciona tu opcion preferida"<<endl;
				cout<<"1. Forma ascendente"<<endl;
				cout<<"2. Forma descendente"<<endl;
				cin>>opci;
				switch(opci)
				{
				case 1:cout<<"Seleccionaste la forma ascendente"<<endl;
				     MS.leeCadena(lon,arr);
				     MS.ordenShell(arr,lon);
				     MS.muestraCadena(lon,arr);
				     break;
				case 2:cout<<"Seleccionaste la forma descendente"<<endl;
				     MS.leeCadena(lon,arr);
				     MS.ordenShell(arr,lon);
				     MS.muestraCadenaA(lon,arr);
				     break;
				     default:cout<<"Opcion inexistente"<<endl;
				}
				cout<<"Deseas regresar al menu de Shellsort presiona 1"<<endl;
				 cin>>opc2;
				}while(opc2==1);
			}
			break;
			case 4:cout<<"Seleccionaste Metodo Radix"<<endl;
				{
				int numero,*c; 
				int b;
				   c= new int[numero];
				   Radix p;
				   cout<<"\tInserte  el numero de datos"<<endl;
				  cin>>numero;
				  cout<<"Inserte los elementos"<<endl;
						   for(int i=0;i<numero;i++)
						   {
						   	cout<<" ";
						   	cin>>c[i];
						   }
                        	if (numero)
		                    p.radixsort(c, numero);
		           do{
			    cout<<"Selecciona tu opcion preferida"<<endl;
				cout<<"1. Forma ascendente"<<endl;
				cout<<"2. Forma descendente"<<endl;
				cin>>opci;
				switch(opci)
				{
				case 1:cout<<"Seleccionaste la forma ascendente"<<endl;
				     cout<<"\tOrden Ascendente"<<endl;
	                        for (int i = 0; i < numero; i++)
	                        {
	                          	cout<<"|";
						   	    cout<<c[i];
						   }
				     break;
				case 2:cout<<"Seleccionaste la forma descendente"<<endl;
				    cout<<"\tOrden Descendente"<<endl;
 	              cout<<"       ";
 	                      for(int i=numero-1;i>=0;i--)
 	                         {
 	                        	cout<<"|";
		                        cout<<c[i];
	                         }		   
						   delete[]c;
				     break;
				     default:cout<<"Opcion inexistente"<<endl;
				}
				cout<<"Deseas regresar al menu de Radix presiona 1"<<endl;
				 cin>>opc2;
				}while(opc2==1);
			}
			break;           
	
			case 5:exit(0);
		
			default:cout<<"Opcion inexistente"<<endl;
		}
cout<<"Deseas regresar al menu presiona 1"<<endl;
		cin>>b;
system("cls");	
}while(b==1);
cout<<endl;
system("pause");
return 0;
}

