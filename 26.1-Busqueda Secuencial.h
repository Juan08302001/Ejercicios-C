#include <iostream>
 #include <fstream>
#include <stdlib.h>


using namespace std;

class BusquedaSecuencial
{
	private:
		int i;
	public:
		BusquedaSecuencial()
		{
			int lon=0;
		}
	 void insertar();
	 void BusquedaSec(int numBus);
	 void posicion(int numBus);
	 
};

void BusquedaSecuencial::BusquedaSec(int numBus)
{
	//METODO POR BUSQUEDA SECUENCIAL
	ifstream in; 
	int cont =0;
	long int ftell(FILE *fichero);
    in.open("hola.txt");
    bool bandera=false;

    int num; 
    while(!in.eof())
	{
      in>>num;
      cont = cont+1;
      
    if(num==numBus)
    
	{
		bandera=true;
    cout<<"El numero "<<num<<" esta en la posicion :"<<cont<<endl;
    }

	}
		if(bandera==false)
    cout<<"\nPerdon aqui el elemento no esta en el archivo   :,("<<endl;
}

