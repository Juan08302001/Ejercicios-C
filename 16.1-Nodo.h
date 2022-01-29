//typedef int Tipoelemento;
class Nodo
{
private:
Tipoelemento dato;
Nodo *izdo;
Nodo *dcho;
public:
//Método constructor
Nodo(Tipoelemento valor)
{
    dato=valor;
    izdo=dcho=NULL;
}
Nodo(Tipoelemento valor, Nodo* ramIzq, Nodo* ramDer)        
{
    dato=valor;
    izdo=ramIzq;
    dcho=ramDer;
}
//Operaciones de acceso
Tipoelemento visitar(){return dato;}
Nodo* subArbolIzdo(){return izdo;}
Nodo* subArbolDer(){return dcho;}
//Operaciones de modificación
void numeroValor(Tipoelemento d){dato=d;}
void ramaIzdo(Nodo* n){izdo=n;}
void ramaDer(Nodo* n){dcho=n;}

};

