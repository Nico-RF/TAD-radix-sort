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

<br />
<br />

## Arquitectura del proyecto:
    TAD-radix-sort/  # Root del proyecto
      ├── head/        # Definiciones y prototipos
      │   ├── lista.h    # Definición y prototipos de listas simplemente enlazadas  
      │   └── radix.h    # Prototipos de las funciones de ordenamiento Radix Sort
      ├── src/         # Implementaciones
      │   ├── lista.c    # Implementación de listas enlazadas
      │   ├── radix.c    # Lógica del algoritmo Radix Sort con estructuras
      │   └── main.c     # Punto de entrada y casos de prueba
      ├── Makefile       # Automatización de la compilación
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
