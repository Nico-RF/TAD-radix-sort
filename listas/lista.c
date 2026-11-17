// Estos archivos se supone que son nuestro magic alonso para empezar

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "lista.h"

int creaVacia(Lista *l)
{
    if (l == NULL)
        return -2;
    else if (NULL == (l->raiz = l->ultimo = (tipoCelda *)malloc(sizeof(tipoCelda))))
        return -1;
    else
    {
        l->raiz->sig = NULL;
        return 0;
    }
}

int vacia(Lista *l)
{
    if (l == NULL || l->raiz == NULL)
        return -1;
    else if (l->raiz->sig == NULL)
        return 1;
    else
        return 0;
}

int destruye(Lista *l)
{
    if (l == NULL || l->raiz == NULL)
        return -1;
    else if (l->raiz->sig != NULL)
        return -2;
    else
    {
        free(l->raiz);
        l->raiz = l->ultimo = NULL;
        return 0;
    }
}

void imprime(Lista *l)
{
    tipoCelda *aImprimir;
    int posicion;

    if (l == NULL || l->raiz == NULL)
        return;
    else
    {
        posicion = 1;
        aImprimir = l->raiz->sig;
        while (aImprimir != NULL)
        {
            // printf("Valor: %d en posición: %d\n",aImprimir->elemento, posicion++);
            printf(" %d ", aImprimir->elemento);
            aImprimir = aImprimir->sig;
        }
        //        printf("%d valores en la lista\n",posicion-1);
    }
}

tipoPosicion anterior(tipoPosicion p, Lista *l)
{
    tipoCelda *anterior;

    if (l == NULL || l->raiz == NULL || p == NULL)
        return NULL;
    else if (p == l->raiz)
        return l->raiz;
    else
    {
        anterior = l->raiz;
        while (anterior->sig != p)
            anterior = anterior->sig;
        return anterior;
    }
}

tipoPosicion primero(Lista *l)
{
    if (l == NULL)
    {
        fprintf(stderr, "Fallo precondición lista no existente!\n");
        return NULL;
    }
    else if (l->raiz == NULL)
    {
        fprintf(stderr, "Fallo precondición lista no inicializada!\n");
        return NULL;
    }
    else
        return l->raiz;
}

tipoPosicion fin(Lista *l)
{
    if (l == NULL)
    {
        fprintf(stderr, "Fallo precondición lista no existente!\n");
        return NULL;
    }
    else if (l->ultimo == NULL)
    {
        fprintf(stderr, "Fallo precondición lista no existente!\n");
        return NULL;
    }
    else
        return l->ultimo;
}

int inserta(tipoElemento x, tipoPosicion p, Lista *l)
{
    tipoCelda *nuevo;

    if (l == NULL)
    {
        fprintf(stderr, "Fallo precondición lista no existente!\n");
        return -1;
    }
    else if (l->raiz == NULL)
    {
        fprintf(stderr, "Fallo precondición nodo ficticio no existente!\n");
        return -2;
    }
    else if (p == NULL)
    {
        fprintf(stderr, "Fallo precondición posición no válida!\n");
        return -3;
    }
    else if (NULL == (nuevo = (tipoCelda *)malloc(sizeof(tipoCelda))))
    {
        fprintf(stderr, "Fallo reserva memoria!\n");
        return -4;
    }
    else
    {
        nuevo->elemento = x;
        nuevo->sig = p->sig;
        p->sig = nuevo;
        if (p == l->ultimo)
            l->ultimo = nuevo;
        return 0;
    }
}

int suprime(tipoPosicion p, Lista *l)
{
    tipoPosicion aBorrar;

    if (l == NULL || l->raiz == NULL || p == NULL || p->sig == NULL)
        return -1;

    aBorrar = p->sig;
    p->sig = aBorrar->sig;

    if (aBorrar == l->ultimo)
        l->ultimo = p;

    free(aBorrar);
    return 0;
}

tipoPosicion siguiente(tipoPosicion p, Lista *l)
{
    if (l == NULL || p == NULL || p == l->ultimo)
        return NULL;
    return p->sig;
}

tipoPosicion localiza(tipoElemento x, Lista *l)
{
    tipoPosicion q;

    if (l == NULL || l->raiz == NULL)
        return NULL;

    q = l->raiz;
    while (q->sig != NULL)
    {
        if (q->sig->elemento == x)
            return q->sig;
        q = q->sig;
    }
    return q;
}

tipoElemento recupera(tipoPosicion p, Lista *l)
{
    if (l == NULL || p == NULL || p->sig == NULL)
    {
        fprintf(stderr, "Error: Posición inválida para recuperar.\n");
        return -1;
    }
    return p->sig->elemento;
}

int anula(Lista *l)
{
    tipoPosicion q, aBorrar;

    if (l == NULL || l->raiz == NULL)
        return -1;

    q = l->raiz;
    while (q->sig != NULL)
    {
        aBorrar = q->sig;
        q->sig = aBorrar->sig;
        free(aBorrar);
    }

    l->ultimo = l->raiz;
    return 0;
}

int traspasarNodo(tipoPosicion p, Lista *la, tipoPosicion q, Lista *lb) {
    /*
        Asumimos que si p o q != NULL, son una posición VÁLIDA de la lista enlazada.
    */

    tipoCelda *aux;

    if (la == NULL || lb == NULL) {
        fprintf(stderr, "Fallo precondición: alguna de las listas no existe o no está inicializada!\n");
        return -1;
    }

    if (la->raiz == NULL || la->ultimo == NULL || lb->raiz == NULL || lb->ultimo == NULL) {
        fprintf(stderr, "Fallo precondición: No hay nodo ficticio en alguna de las listas\n");
        return -2;
    }
    if (p == NULL || p == fin(la) || q == NULL) 
        return -3;

    // poner el nodo en la posicion p de la en la posicion q de lb
    aux = p->sig;
    p->sig = p->sig->sig;
    aux->sig = q->sig;
    q->sig = aux;

    return 0;
}

int concatenarListas(Lista *lA, Lista *lB)
{
    tipoCelda *actualB;
    tipoCelda *nuevo;

    if (lA == NULL || lA->raiz == NULL || lB == NULL || lB->raiz == NULL)
    {
        fprintf(stderr, "Fallo precondición: alguna de las listas no existe o no está inicializada!\n");
        return -1;
    }

    actualB = lB->raiz->sig;

    while (actualB != NULL)
    {
        nuevo = (tipoCelda *)malloc(sizeof(tipoCelda));
        if (nuevo == NULL)
        {
            fprintf(stderr, "Fallo reserva memoria en concatena!\n");
            return -4;
        }
        nuevo->elemento = actualB->elemento;
        nuevo->sig = NULL;

        lA->ultimo->sig = nuevo;
        lA->ultimo = nuevo;

        actualB = actualB->sig;
    }
    return 0;
}

