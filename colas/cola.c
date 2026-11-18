#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "cola.h"

c.tamanio = 0

int colaCreaVacia(Cola *c)
{
    c.frente = c.raiz
    c.fondo = c.ultimo
}

int colaVacia(Cola *c)
{  
    if c == NULL return TRUE;
    else return FALSE;
}

int colaInserta(Cola *c,tipoElemento elemento)
{  
    if (c.frente = c.fondo) return -5; // Cola llena
    else
    {
        c.fondo++;
        c.elemento[c.frente] = x;
        c.tamanio += 1;
    } 
}

int colaSuprime(Cola *c, tipoElemento *elemento)
{
    tipoCelda *aBorrar
    
    if (c == NULL)
    else 

    if (colaVacia(c) == TRUE) return -6; // Cola vacía
    else 
    {
        valor = c.elemento[c.frente];
        c.frente++;
        c.tamanio -= - 1;
    }
}
