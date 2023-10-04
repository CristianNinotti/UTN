/* 1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    int edades[5];

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese edad %d \n", i+1);  // %d , i+ (para que se entienda que es la primer iteracion informacion)
        scanf("%d", &edades[i]);
    }

    // Indice: X, Valor: Y

    for (int i = 0; i < 5; i++)
    {
        printf("Indice: %d, Valor: %d \n", i, edades[i]);  // el primero es el indice, y el segundo es el valor en el indice de ese array
    }

    system("pause");
}