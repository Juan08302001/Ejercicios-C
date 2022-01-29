#include <iostream>
#include <stdlib.h>

using namespace std;

class Interca
{
	private:
	 int i,particion;
	 int vector[];
	 int fusion[];
	public:
		Interca()
		{
			int lon=0;
		}
	
	void visualizarVecA(int arr[],int x);
	void visualizarVecB(int arr2[],int y);
	
	void OrdenarAs(int vectorB[],int y);
	void OrdenarMetodoAs(int vectorA[],int x);
	void fusionAs(int vectorA[],int vectorB[],int x,int y);
	
	
	void ordenarDe(int vectorA[],int x);
	void OrdenarMetodoDe(int vectorB[],int y);
	void fusionDe(int vectorB[],int vectorA[],int y,int x);
	
	void Shellsort(int arreglo[], int lon);
	void Shellsort2(int arreglo2[], int lon2);

};
void Interca::visualizarVecA(int arr[],int x)
{
	int i;
    for(i=0;i<x;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>arr[i];
    }
}

void Interca::visualizarVecB(int arr2[],int y)
{
	int i;
    for(i=0;i<y;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>arr2[i];
    }
}

void Interca::OrdenarMetodoAs(int vectorA[],int x)
{
	int temp;
	for(int i=0; i<x; i++)
	{
		for(int j=0;j<x-1;j++)
		{
			if(vectorA[j]>vectorA[j+1])
			{
			temp=vectorA[j];
			vectorA[j]=vectorA[j+1];
			vectorA[j+1]=temp;
			}
		
		}
	}
	cout<<"Forma ascendente"<<endl;
	for(int i=0; i<x; i++)
	{
		cout<<vectorA[i]<<" ";
	}
	cout<<" "<<endl;
}

void Interca::OrdenarAs(int vectorB[],int y)
{
		int temp;
	for(int i=0; i<y; i++)
	{
		for(int j=0; j<y; j++)
		{
			if(vectorB[j]>vectorB[j+1])
			{
				temp=vectorB[j];
				vectorB[j]=vectorB[j+1];
				vectorB[j+1]=temp;
			}
		}
	}
	cout<<"Forma ascendente"<<endl;
	for(int i=0; i<y; i++)
	{
		cout<<vectorB[i]<<" ";
	}
	cout<<endl;
}

void Interca::fusionAs(int vectorA[],int vectorB[],int x,int y)
{
	cout<<"Se fusionaran los dos vectores"<<endl;
	int m,n,p;
	int i=0, j=0, k=0;
     m=x;
     n=y;
	while(i<m&&j<n)
	{
		if(vectorA[i]<=vectorB[j])
		{
			fusion[k]=vectorA[i];
			i++;
		}
		else
		{
			fusion[k]=vectorB[j];
			j++;
		}
		k++;
		}
		if(i>=m)
		{
			for(p=j;p<n;p++)
			{
				fusion[k]=vectorB[p];
				k++;
			}
		}
		if(j>=n)
		{
			for(p=i; p<m;p++)
			{
				fusion[k]=vectorA[p];
				k++;
			}
		}
		cout<<"Elementos ordenados"<<endl;
		for(int p=0;p<k;p++)
		{
			cout<<fusion[p]<<endl;
		}
}


void Interca::OrdenarMetodoDe(int vectorB[],int y)
{
	for(int i=0; i<y; i++)
	{
		int temp;
		for(int j=0; j<y-1; j++)
		{
			if(vectorB[j]<vectorB[j+1])
			{
				temp=vectorB[j];
				vectorB[j]=vectorB[j+1];
				vectorB[j+1]=temp;
			}
		}
	}
	cout<<"\nForma descendente"<<endl;
	for(int i=0; i<y; i++)
	{
		cout<<vectorB[i]<<" ";
	}
	cout<<endl;
}

void Interca::ordenarDe(int vectorA[],int x)
{
	for(int i=0; i<x; i++)
	{
		int temp;
		for(int j=0; j<x-1; j++)
		{
			if(vectorA[j]<vectorA[j+1])
			{
				temp=vectorA[j];
				vectorA[j]=vectorA[j+1];
				vectorA[j+1]=temp;
			}
		}
	}
	cout<<"\nForma descendente"<<endl;
	for(int i=0; i<x; i++)
	{
		cout<<vectorA[i]<<" ";
	}
	cout<<endl;
}
void Interca::fusionDe(int vectorB[],int vectorA[],int y,int x)
{
	cout<<"Se fusionaran los dos vectores"<<endl;
	int m,n,p;
	int i=0, j=0, k=0;
     m=x;
     n=y;
	while(i<m&&j<n)
	{
		if(vectorA[i]>=vectorB[j])
		{
			fusion[k]=vectorA[i];
			i++;
		}
		else
		{
			fusion[k]=vectorB[j];
			j++;
		}
		k++;
		}
		if(i>=m)
		{
			for(p=j;p<n;p++)
			{
				fusion[k]=vectorB[p];
				k++;
			}
		}
		if(j>=n)
		{
			for(p=i; p<m;p++)
			{
				fusion[k]=vectorA[p];
				k++;
			}
		}
		cout<<"Elementos ordenados"<<endl;
		for(int p=0;p<k;p++)
		{
			cout<<fusion[p]<<endl;
		}
}
void Interca::Shellsort(int arreglo[], int lon)
{
	int i,j,inc,temp;
	 for(inc = 1 ; inc<lon;inc=inc*3+1);
   
      while (inc > 0)
      {
          for (i=inc; i < lon; i++)
          {
                j = i;
                temp = arreglo[i];
                while ((j >= inc) && (arreglo[j-inc] > temp))
                {
                    arreglo[j] = arreglo[j - inc];
                    j = j - inc;
                }
       
                arreglo[j] = temp;
          }
         
          inc/= 2;
      }
}
void Interca::Shellsort2(int arreglo2[], int lon2)
{
	int i,j,inc,temp;
	 for(inc = 1 ; inc<lon2;inc=inc*3+1);
   
      while (inc > 0)
      {
          for (i=inc; i < lon2; i++)
          {
                j = i;
                temp = arreglo2[i];
                while ((j >= inc) && (arreglo2[j-inc] > temp))
                {
                    arreglo2[j] = arreglo2[j - inc];
                    j = j - inc;
                }
       
                arreglo2[j] = temp;
          }
         
          inc/= 2;
      }
}
