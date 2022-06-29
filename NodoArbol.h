#include <iostream>

using namespace std;

struct NodoABB
{

    int dato;
    NodoABB *izq;
    NodoABB *der;

    NodoABB()
    {
        izq = NULL;
        der = NULL;
    }

    NodoABB(int dato)
    {
        this->dato = dato;
        izq = NULL;
        der = NULL;
    }

    void insertar(int dato)
    {
        if (this->dato < dato)
        {
            if (der == NULL)
            {
                der = new NodoABB(dato);
            }
            else
            {
                der->insertar(dato);
            }
        }
        else
        {
            if (izq == NULL)
            {
                izq = new NodoABB(dato);
            }
            else
            {
                izq->insertar(dato);
            }
        }
    }
};