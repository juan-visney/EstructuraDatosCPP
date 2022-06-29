#include "Arbol.h"

using namespace std;

int main()
{
    ABB arbol;
    arbol.insertar(10);
    arbol.insertar(5);
    arbol.insertar(1);
    arbol.insertar(8);
    arbol.insertar(14);
    arbol.insertar(11);
    arbol.insertar(19);
    arbol.preOrden();
    arbol.enOrden();
    arbol.postOrden();
    return 0;
}