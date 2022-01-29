const int MAXTAMQ=10;
class ColaLineal
{
private:
    int frente;
    int final;
    TipoDeDato listaCola[MAXTAMQ];
public:
    ColaLineal()
    {
        frente=0;
        final=-1;
    }
    void insertar(const TipoDeDato& elemento);
    TipoDeDato quitar();
    void mostrarCola();
    void borrarCola();
    TipoDeDato frenteCola();
    bool colaVacia();
    bool colaLlena();
};
    //operaciones de modificación de la cola
    void ColaLineal::insertar(const TipoDeDato& elemento)
    {
        if(!colaLlena())
        {
                final=final+1;
                listaCola[final]=elemento;
        }
        else
        throw "OVERFLOW EN LA COLA";    
    }
    TipoDeDato ColaLineal::quitar()
    {
        if(!colaVacia())
        {
           return listaCola[frente++];
        }
        else
        throw "COLA VACIA";
    }
    void ColaLineal::borrarCola()
    {
        frente=0;
        final=-1;
    }
    //acceso a la cola
    TipoDeDato ColaLineal::frenteCola()
    {
       if(!colaVacia())
       {
              return listaCola[frente];       
       }
       else
          throw "COLA VACIA";
    }
    //Métodos de verificación del estado de la cola
    bool ColaLineal::colaVacia()
    {
        return frente>final;
    }
    bool ColaLineal::colaLlena()
    {
        return final==MAXTAMQ-1;
    }
    void ColaLineal:: mostrarCola()
{
   cout<<endl<<" ELEMENTOS EN LA COLA "<<endl;
    for (int i=final;i>=frente;i--)
    {
    cout<< listaCola[i];
    cout<<" ";
    }
}
    
