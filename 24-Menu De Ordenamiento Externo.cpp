#include <iostream>
#include <cstdlib>
#include "24.1-Intercalacion.h"
#include "24.2-Mezcla Directa.h"
#include "24.3-Mezcla Natural.h"
using namespace std;
int main (int argc, char * arg[])
{
	int opci,opc, opc2;
	int lon,n,x,y, b,n2;
	system("color 4F");
    Interca IC;
    MezclaDirecta MD; 
    MezclaNatural MN;
	cout<<"Bienvenido al programa general de ordenamiento"<<endl;
	do
	{
		cout<<"Selecciona una opcion"<<endl;
		cout<<"1. Metodo por Intercalacion"<<endl;
		cout<<"2. Metodo por Mezcla Directa"<<endl;
		cout<<"3. Metodo por Mezcla Natural"<<endl;
		cout<<"4. Salir"<<endl;
		cin>>opc;
		
        switch(opc)
        {
        	case 1:cout<<"Seleccionaste Metodo por Intercalacion"<<endl;
        	{
				cout<<"Ingresa Numero De Elementos A Capturar del vector A: "<<endl;
				cin>>x;
    			int arr[x];
    			IC.visualizarVecA(arr,x);
    			cout<<"Ingresa Numero De Elementos A Capturar del vector B:"<<endl;
    			cin>>y;
    			int arr2[y];
    			IC.visualizarVecB(arr2,y);
			    do{		
        		cout<<"Selecciona tu opcion preferida"<<endl;
        		cout<<"1. Forma ascendente"<<endl;
        		cout<<"2. Forma descendete"<<endl;
        		cin>>opci;
        		switch(opci)
        		{
        		case 1:cout<<"Seleccionaste la forma ascendente"<<endl;
        		    IC.Shellsort(arr,x);
            	   	IC.OrdenarAs(arr2,y);
            	   	IC.Shellsort2(arr2,y);
            	   	IC.OrdenarMetodoAs(arr,x);
            	   	IC.fusionAs(arr,arr2,x,y);
        			break;
        		case 2:cout<<"Seleccionaste la forma descendente"<<endl;
				    IC.Shellsort(arr,x);
               	    IC.ordenarDe(arr,x);
               	    IC.Shellsort2(arr2,y);
               	    IC.OrdenarMetodoDe(arr2,y);
               	    IC.fusionDe(arr2,arr,y,x);
					break;
					default:cout<<"Opcion inexistente"<<endl;	
				}
				 cout<<"Deseas regresar al menu de Intercalacion presiona 1"<<endl;
				 cin>>opc2;
				}while(opc2==1);
			}
			break;
	    case 2:cout<<"Seleccionaste Metodo por Mezcla Directa"<<endl;
			{
				cout<<"Ingresa Numero De Elementos A Capturar del vector A: "<<endl;
				cin>>x;
    			int arr[x];
			    MD.visualizarVecA(arr,x);
			    cout<<"Ingresa Numero De Elementos A Capturar del vector B:"<<endl;
    			cin>>y;
    			int arr2[y];
    			MD.visualizarVecB(arr2,y);
                    do{
				cout<<"Selecciona tu opcion preferida"<<endl;
				cout<<"1. Forma ascendente"<<endl;
				cout<<"2. Forma descendente"<<endl;
				cin>>opci;
				switch(opci)
				{
				case 1:cout<<"Seleccionaste la forma ascendente"<<endl;
            	   	MD.OrdenarMetodoAs(arr,x);
            	   	MD.OrdenarAs(arr2,y);
            	   	MD.mezclaD(arr,arr2,x,y);
            	   	MD.fusionAs(arr,arr2,x,y);
				     break;
				case 2:cout<<"Seleccionaste la forma descendente"<<endl;
               	    MD.OrdenarMetodoDe(arr2,y);
               	     MD.ordenarDe(arr,x);
               	    MD.fusionDe(arr2,arr,y,x);
               	    MD.mezclaD2(arr2,arr,y,x);
				     break;
				     default:cout<<"Opcion inexistente"<<endl;
				}
				cout<<"Deseas regresar al menu de Mezcla Directa presiona 1"<<endl;
				 cin>>opc2;
				}while(opc2==1);
			}
			break;
		case 3:cout<<"Seleccionaste Metodo por Mezcla Natural"<<endl;
			{
			cout<<"Ingresa Numero De Elementos A Capturar del vector A: "<<endl;
				cin>>x;
    			int arr[x];
			    MD.visualizarVecA(arr,x);
			    cout<<"Ingresa Numero De Elementos A Capturar del vector B:"<<endl;
    			cin>>y;
    			int arr2[y];
    			MD.visualizarVecB(arr2,y);	    
                    do{
			    cout<<"Selecciona tu opcion preferida"<<endl;
				cout<<"1. Forma ascendente"<<endl;
				cout<<"2. Forma descendente"<<endl;
				cin>>opci;
				switch(opci)
				{
				case 1:cout<<"Seleccionaste la forma ascendente"<<endl;
				    MN.Ordenar(arr,x);
            	    MN.ascendente(arr2,y);
            	    MN.mezcla(arr,x);
            	    MN.mezclar(arr,x,arr2,y);
				     break;
				case 2:cout<<"Seleccionaste la forma descendente"<<endl;
				    MN.Ordenar2(arr2,y);
               	   	MN.descendente(arr,x);
               	   	MN.mezcla2(arr2,y);
               	   	MN.mezclar2(arr2,arr,y,x);
				     break;
				     default:cout<<"Opcion inexistente"<<endl;
				}
				cout<<"Deseas regresar al menu de Mezcla Natural presiona 1"<<endl;
				 cin>>opc2;
				}while(opc2==1);
			 }
			    break;
	
			case 4:exit(0);
		
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

