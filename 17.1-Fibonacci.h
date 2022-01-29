#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;
class Fibonacci
{
	private:
		int fi;
		int b;
		int x;
		int z;
		
		public:
		Fibonacci(int N){fi=N; b=0;x=1;z=1;}
		
		void visualizar();
		void FiboI();
		int FiboR(int a);
};
void Fibonacci::visualizar()
{
	cout<<"La sucesion fibonacci es "<< fi << " n numeros  = ";
} 
void Fibonacci::FiboI()
{
	cout<<"0 1 ";
	for(int i=1;i<fi;i++){
		z = b + x;
		cout<<z<<" ";
		b = x;
		x = z;		
	}
	cout<<"\n";
}
int Fibonacci::FiboR(int a)
{
	if((a==0)||(a==1))
	return a;
	else
	return FiboR(a-1)+FiboR(a-2);		
}



