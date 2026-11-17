// Nico was here
int radixSort() // No sé cual es el input XDDD
{
    tipoCelda *Grupos[nGrupos], *Ultimos[nGrupos];
    for (cifra = 1; cifra <= nCifras; cifra++)
    {
        for (k = 0; k < nGrupos; k++)
        {
            ptGrupos[k] = NULL;
            ptUltimos[k] = NULL;
        }
        distribuir (cifra, lista, *Grupos, *Ultimos)
        concatenar (lista, *Grupos, *Ultimos)
    }
}