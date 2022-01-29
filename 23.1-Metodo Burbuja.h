#include <stdlib.h> 
#include <iostream> 

using namespace std; 

class MetodoBurbuja
{
    private:
    int arreglo[], lon;
    
    public:
    //MÉTODO CONSTRUCTOR SIN PARAMETROS
    MetodoBurbuja() 
    {
    int lon=0;
    }
    
    //MÉTODOS A EMPLEAR
    void OrdenarAs(int arreglo[], int lon);
    void OrdenarDe(int arreglo[], int lon);
};

void MetodoBurbuja::OrdenarAs(int arreglo[], int lon)

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
				
void MetodoBurbuja::OrdenarDe(int arreglo[], int lon)
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
				
    
