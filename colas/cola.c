#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "../colas/cola.h"



colaSuprime(Cola *c, tipoElemento *elemento): Si c == NULL, elemento == NULL o colaVacia(c) == 1, devolver error negativo. Guardar *elemento = c->frente->elemento;, aBorrar = c->frente;, avanzar c->frente = c->frente->sig;, y si c->frente == NULL (la cola se ha quedado vacía), poner también c->fondo = NULL;. Liberar aBorrar con free y devolver 0.

int colaCreaVacia(Cola *c)
{
    if (c == NULL) return -1;
    c->frente = NULL;
    c->fondo = NULL;
    return 0
}

int colaVacia(Cola *c)
{  
    if (c == NULL) return -1;
    else if (c->frente == NULL ||c->fondo == NULL) return 1
    else return 0;
}

int colaInserta(Cola *c,tipoElemento elemento)
{  
    // FALTA hacer malloc
    nuevo->elemento = elemento;
    nuevo->sig = NULL;
    
    if (colaVacia(c) = 1)
    {
        c->frente = nuevo;
        c->fondo = nuevo;
    }
    else
    {
        c->fondo->sig = nuevo;
        c->fondo = nuevo;
    }
    return 0; 
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
