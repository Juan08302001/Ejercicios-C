#include <iostream>
using namespace std;
typedef char Tipoelemento;
#include "16.2-Arbol.h"

int main()
{
    ArbolBinario a1,a2,a3,a4,a;
    Nodo *n1,*n2,*n3,*n4;
    
    n1=a1.nuevoArbol('D',NULL,NULL);
    n2=a2.nuevoArbol('E',NULL,NULL);
    n3=a3.nuevoArbol('B',n1,n2);
  
    n1=a1.nuevoArbol('F',NULL,NULL);
    
    n4=a4.nuevoArbol('C',NULL,n1);
    n1=a1.nuevoArbol('A',n3,n4);

    cout<<"Arbol Binario "<<endl;
    a.Praiz(n1);
    cout<<"***Recorrido en preorden***"<<endl;
    a.preorden();
    cout<<"***Recorrido en inorden***"<<endl;
    a.inorden();
    cout<<"***Recorrido en postorden***"<<endl;
    a.postorden();
    system("pause");
}

