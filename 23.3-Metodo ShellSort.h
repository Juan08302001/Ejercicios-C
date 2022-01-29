#include<iostream>
using namespace std;
class ShellSort
{
	private:
		int A[];
		int n;
	public:
	ShellSort()
	{
		int n=0;
	}	
void ordenShell(int A[],int n);
void leeCadena(int cant,int n[]);
void muestraCadena(int cant,int n[]);
void muestraCadenaA(int cant,int n[]);

};
void ShellSort::ordenShell(int A[],int n)
{
     
  int i, j, inc, temp;
  	
  
  for(inc = 1 ; inc<n;inc=inc*3+1);
   
      while (inc > 0)
      {
          for (i=inc; i < n; i++)
          {
                j = i;
                temp = A[i];
                while ((j >= inc) && (A[j-inc] > temp))
                {
                    A[j] = A[j - inc];
                    j = j - inc;
                }
       
                A[j] = temp;
          }
         
          inc/= 2;
      }
}
void ShellSort::leeCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<"Ingresa un numero "<<i+1<<": ";
        cin>>n[i];
    }
     
}
 
void ShellSort::muestraCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<" | ";
    }
    cout<<" "<<endl;
    
}
void ShellSort::muestraCadenaA(int cant,int n[])
{
	for(int j=cant-1;j>=0;j--)
    {
        cout<<n[j]<<" | ";
    }
    cout<<" "<<endl;
}
  
