#include <iostream>
#include <stdlib.h>

using namespace std;

class MezclaNatural 
{
	private:
		int i;
		int vector[];
		int fusion[];
		public:
	MezclaNatural()
	{
		int lon=0;
	}
	void visualizarVecA(int arr[],int x);
	void visualizarVecB(int arr2[],int y);
	
	void Ordenar(int vectorA[],int x);
	void Ordenar2(int vectorB[],int y);
	
	void ascendente(int vectorB[],int y);
	void descendente(int vectorA[],int x);
	
	void mezclar(int arreglo1[], int n1, int arreglo2[], int n2);
	void mezclar2(int vectorB[],int vectorA[], int y, int x);
	
	void mezcla(int vector[], int n);
	void mezcla2(int vector[], int n) ;
};
void MezclaNatural::visualizarVecA(int arr[],int x)
{
	int i;
    for(i=0;i<x;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>arr[i];
    }
}

void MezclaNatural::visualizarVecB(int arr2[],int y)
{
	int i;
    for(i=0;i<y;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>arr2[i];
    }
}
void MezclaNatural::mezclar(int arreglo1[], int n1, int arreglo2[], int n2)
{
cout<<"Se fusionaran los dos vectores"<<endl;
	int m,n,p;
	int i=0, j=0, k=0;
     m=n1;
     n=n2;
	while(i<m&&j<n)
	{
		if(arreglo1[i]<=arreglo2[j])
		{
			fusion[k]=arreglo1[i];
			i++;
		}
		else
		{
			fusion[k]=arreglo2[j];
			j++;
		}
		k++;
		}
		if(i>=m)
		{
			for(p=j;p<n;p++)
			{
				fusion[k]=arreglo2[p];
				k++;
			}
		}
		if(j>=n)
		{
			for(p=i; p<m;p++)
			{
				fusion[k]=arreglo1[p];
				k++;
			}
		}
		cout<<"Elementos ordenados"<<endl;
		for(int p=0;p<k;p++)
		{
			cout<<fusion[p]<<endl;
		}
}
void MezclaNatural::mezcla(int vector[], int n) 
{
	int *vectorA, *vectorB, n1, n2, x, y;
 
    if (n > 1) {
 
    if (n % 2 == 0)
 
        n1 = n2 = (int) n / 2;
 
    else {
 
        n1 = (int) n / 2; n2 = n1 + 1;
 
    }
 
    vectorA = new int [n1];
  
    vectorB = new int [n2];
 
        for(x = 0; x < n1; x++)
 
            vectorA[x] = vector[x];
 
        for(y=0; y < n2; y++)
 
            vectorB[y] = vector[x];
 
       mezcla(vectorA, n1);
 
        mezcla(vectorB, n2);
 
        mezclar(vectorA, n1, vectorB, n2);
 
        delete vectorA;
 
        delete vectorB;
 
    }    
}
void MezclaNatural::ascendente(int vectorB[],int y)
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

void MezclaNatural::descendente(int vectorA[],int x)
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

void MezclaNatural::Ordenar2(int vectorB[],int y)
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

void MezclaNatural::Ordenar(int vectorA[],int x)
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
void MezclaNatural::mezclar2(int vectorB[],int vectorA[],int y,int x)
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
void MezclaNatural::mezcla2(int vector[], int n) 
{
	int *vectorA, *vectorB, n1, n2, x, y;
 
    if (n > 1) {
 
    if (n % 2 == 0)
 
        n1 = n2 = (int) n / 2;
 
    else {
 
        n1 = (int) n / 2; n1 = n2 + 1;
 
    }
 
    vectorB = new int [n2];
  
    vectorA = new int [n1];
 	
        for(x = 0; y < n2; x++)
 
            vectorB[y] = vector[x];
 
        for(y=0; y < n1; y++)
 
            vectorA[x] = vector[y];
 
       mezcla(vectorA, n1);
 
        mezcla(vectorB, n2);
 
        mezclar(vectorB, n2, vectorA, n1);
 
        delete vectorA;
 
        delete vectorB;
 
    }    
}
