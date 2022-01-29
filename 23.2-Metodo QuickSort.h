#include <stdlib.h> 
#include <iostream> 

using namespace std; 

class MetodoQuickSort
{
    private:
    int arreglo[], lon,izq,der,A[];
    
    public:
    //MÉTODO CONSTRUCTOR SIN PARAMETROS
    MetodoQuickSort() 
    {
    int lon=0;
    }
    
    //MÉTODOS A EMPLEAR
    void OrdenarAs(int arreglo[], int lon);
    void OrdenarDe(int arreglo[], int lon);
    void quicksort(int A[],int izq,int der);
};

void MetodoQuickSort::OrdenarAs(int arreglo[], int lon)

	{ 
		int Temp; 
		for(int i=0; i<lon; i++)
		{ 
                for(int j=0; j<lon-1; j++)
				{ 
                    if(arreglo[j]>arreglo[j+1])
					{
                        Temp=arreglo[j]; 
                        arreglo[j]=arreglo[j+1]; 
                        arreglo[j+1]=Temp;
					}
				}
		}
				cout<<"FORMA ASCENDENTE"<<endl;
                 for(int i=0; i<lon; i++)
            	{
                    cout<<arreglo[i]<<" | ";
				}
				cout<<" "<<endl;
			
	}
				
void MetodoQuickSort::OrdenarDe(int arreglo[], int lon)
     {
     	//METODO INVERSO
		int Temp;
		for(int i=0; i<lon; i++)
		 { 
                for(int j=0; j<lon-1; j++)
				{ 
                    if(arreglo[j]<arreglo[j+1])
					{ 
                        Temp=arreglo[j]; 
                        arreglo[j]=arreglo[j+1]; 
                        arreglo[j+1]=Temp;
					}
				
				}
		}
				cout<<"\nFORMA DESCENDENTE"<<endl;
				for(int i=0; i<lon; i++)
            	{
                    cout<<arreglo[i]<<" | ";
				}
				cout<<" "<<endl;
	 }
#define largo 100
void MetodoQuickSort::quicksort(int A[],int izq,int der)
{
	
    int i,j,x,aux;
     i = izq; 
     j = der;
	 x= A[(izq+der)/2]; 
	   do{
	   	while((A[i]<x)&&(j<=der))
	   	   {
	   		i++;
		   }
		while((x<A[j])&&(j>izq))
		{
			j--;
		}
		if(i<=j)
		{
			aux=A[i]; A[i]=A[j]; A[j]=aux;
			i++; j--;
		}
		
	   }while(i<=j);
	   if(izq<j)
	   quicksort(A,izq,j);
	   if(i<der)
	   quicksort(A,i,der);
	}

    	
    
