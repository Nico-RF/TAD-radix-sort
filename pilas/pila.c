#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "pila.h"



int pilaCreaVacia(Pila *p)
{
    p.raiz = 0;
}

int pilaVacia(Pila *p)
{
    if (p == 0) return TRUE;
    else return FALSE;
}

int pilaInserta(Pila *p,tipoElemento elemento)
{
    if (p.raiz = p.ultimo) return -3; // Pila llena
    else
    {
        p.raiz = p.raiz + 1;
        p.elemento[p.raiz] = x
    }
}

int pilaSuprime(Pila *p, tipoElemento *elemento)
{
   if (pilaCreaVacia(p) == TRUE) return -4; // Pila vacía
   else
   {
        valor = p.elemento[p.raiz];
        p.raiz = p.raiz - 1;
        return valor;
   }
}
