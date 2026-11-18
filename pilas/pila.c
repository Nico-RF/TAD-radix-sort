#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "../pilas/pila.h"



int pilaCreaVacia(Pila *p)
{
    if (p == NULL) return -1;
    *p = NULL;
    return 0;
}

int pilaVacia(Pila *p)
{
    if (*p == NULL) return -1;
    else if (p == NULL) return 1;
    else return 0;
}

int pilaInserta(Pila *p,tipoElemento elemento)
{
    /*
    if (NULL == malloc(sizeof(tipoCelda)) || p == NULL) return -n;
    malloc(sizeof(tipoCelda))
    nuevo->elemento = elemento;
    nuevo->sig = *p;
    *p = nuevo;
    return 0;
    */
    if (p.raiz = p.ultimo) return -3; // Pila llena
    else
    {
        p.raiz = p.raiz + 1;
        p.elemento[p.raiz] = x
    }
}

int pilaSuprime(Pila *p, tipoElemento *elemento)
{
   if (pilaVacia(p) == 1) return -4; // Pila vacía
   else
   {
        *elemento = (*p)->elemento;
        aBorrar = *p;
        *p = aBorrar->sig;
        free(aBorrar)
        return 0;
   }
}
