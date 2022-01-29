typedef char Tipoelemento;
#include "16.1-Nodo.h"
class ArbolBinario
{
private:
Nodo* raiz;
//Métodos privados de la clase
void preorden(Nodo *r)
{
    if(r!=NULL)
    {
        cout<<r->visitar()<<endl;
        preorden(r->subArbolIzdo());
        preorden(r->subArbolDer());
        
    }
}
void inorden(Nodo *r)
{
    if(r!=NULL)
    {
        inorden(r->subArbolIzdo());
        cout<<r->visitar()<<endl;
        inorden(r->subArbolDer());
        
    }
}
void postorden(Nodo *r)
{
    if(r!=NULL)
    {
        postorden(r->subArbolIzdo());
        postorden(r->subArbolDer());
        cout<<r->visitar()<<endl;
    }
}
public:
//Método constructor
ArbolBinario()
{
    raiz=NULL;
}
ArbolBinario(Nodo *r){raiz=r;}
void Praiz(Nodo *r){raiz=r;}
Nodo* Oraiz(){return raiz;}
Nodo raizArbol()
{
    if(raiz)
        return *raiz;
    else
        throw "arbol vacio";
}
bool EsVacio()
{
    raiz==NULL;
}
Nodo* HijoIzdo()
{
    if(raiz)
        return raiz->subArbolIzdo();
    else 
        throw "arbol vacio";
}
Nodo* HijoDer()
{
    if(raiz)
        return raiz->subArbolDer();
    else
        throw "arbol vacio";
}
Nodo* nuevoArbol(Tipoelemento dato, Nodo* ramaIzqda, Nodo* ramaDrcha)
{
    return new Nodo(dato,ramaIzqda,ramaDrcha);
}
void preorden()
{
    preorden(raiz);
}
void inorden()
{
    inorden(raiz);
}
void postorden()
{
    postorden(raiz);
}
};

