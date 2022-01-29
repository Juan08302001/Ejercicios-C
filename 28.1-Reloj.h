#include <cstdlib>
#include <iostream>
using namespace std;

class Reloj
{
private:
    int hora, minuto, segundo;
    
public: 
    Reloj() { hora=0; minuto=0; segundo=0;}
    void visualizar(); //este
    void incrementarSegundo();//este
    void incrementarMinuto();
    void incrementarHora();
    void setHora(int h);
    void setMinuto (int m);
    void setSegundo(int s);//este
    };


void Reloj::visualizar() 
{
    cout<< "La hora es:" <<hora<<":"<<minuto<<":"<<segundo<<endl;
    
}

void Reloj::incrementarSegundo() 
{
	if(segundo <59)
	{
	segundo=segundo+1;
	}
    else
    {
    	segundo=0;
    	incrementarMinuto();
	}
}
void Reloj::incrementarMinuto() 
{
	if(minuto <59)
	{
	minuto=minuto+1;
	}
    else
    {
    	minuto=0;
    	incrementarHora();
	}
    
}
void Reloj::incrementarHora() 
{
    if( hora<22)
	{
	hora=hora+1;
	}
    else
    {
    	hora=0;
	}
}

void Reloj::setSegundo(int s) 
{
   segundo=s;
}


