#include "NodoArbol.h"

class ABB
{
private:
    NodoABB *raiz;

public:
    ABB()
    {
        raiz = NULL;
    }

    void insertar(int dato)
    {
        if (raiz == NULL)
        {
            raiz = new NodoABB(dato);
        }
        else
        {
            raiz->insertar(dato);
        }
    }

    void preOrden()
    {
        cout << "PreOrden: " << endl;
        preOrden(raiz);
        cout << endl;
    }

    void enOrden()
    {
        cout << "EnOrden: " << endl;
        enOrden(raiz);
        cout << endl;
    }

    void postOrden()
    {
        cout << "PostOrden: " << endl;
        postOrden(raiz);
        cout << endl;
    }

    void preOrden(NodoABB *ptr)
    {
        if (ptr != NULL)
        {
            cout << ptr->dato << ", ";
            preOrden(ptr->izq);
            preOrden(ptr->der);
        }
    }

    void enOrden(NodoABB *ptr)
    {
        if (ptr != NULL)
        {
            enOrden(ptr->izq);
            cout << ptr->dato << ", ";
            enOrden(ptr->der);
        }
    }

    void postOrden(NodoABB *ptr)
    {
        if (ptr != NULL)
        {
            postOrden(ptr->izq);
            postOrden(ptr->der);
            cout << ptr->dato << ", ";
        }
    }
};