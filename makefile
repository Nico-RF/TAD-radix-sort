# Proyecto para entrega Tipos Abstractos de Datos 2026
#
# ( Añadir las reglas necesarias para la correcta compilación de todas las implementaciones que se piden)


# Objetos
colas/cola.o: colas/cola.c colas/cola.h
	gcc -g -c colas/cola.c -o colas/cola.o

listas/lista.o: listas/lista.c listas/lista.h 
	gcc -g -c listas/lista.c -o listas/lista.o

pilas/pila.o: pilas/pila.c pilas/pila.h
	gcc -g -c pilas/pila.c -o pilas/pila.o

radixSort.o: radixSort.c radixSort.h listas/lista.h 
	gcc -g -c radixSort.c 

	
# Pruebas
pruebaRadixSort: pruebaRadixSort.c listas/lista.h listas/lista.o radixSort.o
	gcc -g pruebaRadixSort.c radixSort.o listas/lista.o -o pruebaRadixSort

pruebaPila: pruebaPila.c pilas/pila.h pilas/pila.o
	gcc -g pruebaPila.c pilas/pila.o -o pruebaPila

pruebaCola: pruebaCola.c colas/cola.h colas/cola.o
	gcc -g pruebaPila.c pilas/pila.o -o pruebaPila


# Limpiar
clean:
	rm *.o colas/cola.o listas/lista.o pilas/pila.o radixSort.o 
	rm pruebaCola pruebaPila pruebaRadixSort	
	
