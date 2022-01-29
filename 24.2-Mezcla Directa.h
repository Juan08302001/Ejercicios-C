#include <iostream>
#include <stdlib.h>

using namespace std;

class MezclaDirecta
{
	private:
	 int i,particion;
	 int vector[];
	 int fusion[];
	public:
		MezclaDirecta()
		{
			int lon=0;
		}
	
	void visualizarVecA(int arr[],int x);
	void visualizarVecB(int arr2[],int y);
	
	void OrdenarAs(int vectorB[],int y);
	void OrdenarMetodoAs(int vectorA[],int x);
	void mezclaD(int vectorA[],int vectorB[],int x,int y);
	void fusionAs(int vectorA[],int vectorB[],int x,int y);
	
	
	void ordenarDe(int vectorA[],int x);
	void OrdenarMetodoDe(int vectorB[],int y);
	void mezclaD2(int vectorB[],int vectorA[],int y,int x);
	void fusionDe(int vectorB[],int vectorA[],int y,int x);

};
void MezclaDirecta::visualizarVecA(int arr[],int x)
{
	int i;
    for(i=0;i<x;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>arr[i];
    }
}

void MezclaDirecta::visualizarVecB(int arr2[],int y)
{
	int i;
    for(i=0;i<y;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>arr2[i];
    }
}

void MezclaDirecta::OrdenarMetodoAs(int vectorA[],int x)
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

void MezclaDirecta::OrdenarAs(int vectorB[],int y)
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

void MezclaDirecta::mezclaD(int vectorA[],int vectorB[],int x,int y)
{
	int i,k,aux;
	
	for(i=0;i<=x-1;i++)
	{
		aux=vectorA[i];
		k=i-1;
		while((k>=0)&&(aux<vectorA[k]))
		{
			vectorA[k+1]=vectorA[k];
			k=k-1;
		}
		vectorA[k+1]=aux;
	}
	
	for(i=0;i<=x-1;i++)
	{
		aux=vectorB[i];
		k=i-1;
		while((k>=0)&&(aux<vectorB[k]))
		{
			vectorB[k+1]=vectorB[k];
			k=k-1;
		}
		vectorB[k+1]=aux;
	}
}

void MezclaDirecta::fusionAs(int vectorA[],int vectorB[],int x,int y)
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


void MezclaDirecta::OrdenarMetodoDe(int vectorB[],int y)
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

void MezclaDirecta::ordenarDe(int vectorA[],int x)
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

void MezclaDirecta::mezclaD2(int vectorB[],int vectorA[],int y,int x)
{
		int i,k,aux;
	
	for(i=0;i<=x-1;i++)
	{
		aux=vectorA[i];
		k=i-1;
		while((k>=0)&&(aux<vectorA[k]))
		{
			vectorA[k+1]=vectorA[k];
			k=k-1;
		}
		vectorA[k+1]=aux;
	}
	
	for(i=0;i<=x-1;i++)
	{
		aux=vectorB[i];
		k=i-1;
		while((k>=0)&&(aux<vectorB[k]))
		{
			vectorB[k+1]=vectorB[k];
			k=k-1;
		}
		vectorB[k+1]=aux;
	}
}

void MezclaDirecta::fusionDe(int vectorB[],int vectorA[],int y,int x)
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
