# Practica Final Estructuras de Datos y Algoritmos I

# TAD-radix-sort. Tipos abstractos de datos

2º curso, 1er cuatrimestre. Grado en Ingeniería Informática. Facultad de Ciencias de la Universidad de Salamanca.

<br />

*BLANCO DE LA IGLESIA, DAVID*. [@Ugulberto](https://github.com/Ugulberto)

*RODRÍGUEZ FERNÁNDEZ, NICOLÁS*. [@Nico-RF](https://github.com/Nico-RF/)
<br />
<br />

__Nota:__ Informe: **xx.x**. <br />
&emsp;&emsp;&ensp;&nbsp;Defensa: **xx.x**.
<br />
<br />

## Enunciado:
Práctica obligatoria para todos los grupos, que consiste en la implementación y/o utilización de los Tipos Abstractos de Datos explicados en teoría y que forman parte de los enunciados de prácticas del tema. De forma resumida, se trata de realizar las siguientes tareas:

- Implementación del algoritmo de ordenación RadixSort utilizando el TAD Lista
- Ampliación del TAD Lista con algunas funciones que facilitarán la nueva implementación de RadixSort
- Estudio experimental del algoritmo RadixSort
- Implementación del TAD pila mediante lista simplemente enlazada sin nodo ficticio
- Implementación del TAD cola mediante lista simplemente enlazada sin nodo ficticio

Para la realización de la práctica se entrega un fichero, entregaTAD2026.zip, que contiene:

- entregaTAD2026.pdf con el enunciado detallado de la práctica a entregar
- pruebaRadixSort.c, fichero de código C con una función main() y todo lo necesario para poder hacer la prueba de funcionamiento del algoritmo de ordenación RadixSort
- listas, carpeta con el fichero cabecera lista.h
- Un fichero makefile que permite la compilación de pruebaRadixSort.c utilizando la implementación del TAD lista
- pilas, carpeta que contiene el ficheros de cabecera pila.h con las definiciones de tipos y prototipos del TAD Pila
- colas, carpeta que contiene los ficheros de cabecera cola.h con las definiciones de tipos y prototipos de  TAD Cola

Para la entrega se deben completar los ficheros indicados en el enunciado de la práctica, en las correspondientes carpetas, y generar un fichero .zip con toda la estructura. 

<br />

## Arquitectura del proyecto:
    TAD-radix-sort/  # Root del proyecto
      ├── colas/        
      │   ├── cola.c      
      │   └── cola.h    
      ├── listas/
      ├── ├── lista.c         
      │   └── lista.h    
      ├── pilas/        
      │   ├── pila.c    
      │   └── pila.h
      ├── entregaTAD2026.pdf 
      ├── makefile       # Automatización de la compilación
      ├── pruebaCola.c
      ├── pruebaPila.c
      ├── pruebaRadixSort.c
      ├── radixSort.c
      ├── radixSort.h
      └── README.md      # Documentación del proyecto

## Ejecución:
Para que funcione el proyecto, en terminal (por ejemplo, de un entorno WSL), deberemos:
1. Compilar el proyecto:
> make

2. Ejecutar el programa:
> ./radix_sort

3. Limpiar archivos temporales y binarios:
> make clean


## Disclaimers:
1.° LA DETECCIÓN DE COPIA, TOTAL O PARCIAL IMPLICA UN CERO AUTOMÁTICO EN LA PARTE PRÁCTICA DE LA ASIGNATURA. <br /><br />
2.° Se reservan todos los derechos de autoría de este proyecto bajo amparo del *Real Decreto Legislativo 1/1996, de 12 de abril, por el que se aprueba el texto refundido de la **Ley de Propiedad Intelectual**, regularizando, aclarando y armonizando las disposiciones legales vigentes sobre la materia.*
