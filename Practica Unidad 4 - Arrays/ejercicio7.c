/* 7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cantidadNotas, i, contador;
    float totalNotas, promedioNotas;

    printf("Ingrese la cantidad de notas a cargar \n");
    scanf("%d", &cantidadNotas);

    float array[cantidadNotas];

    for(i = 0; i < cantidadNotas; i++)
    {
        printf("Ingrese la nota del alumno %d \n", i+1);
        scanf("%f", &array[i]);

        totalNotas = totalNotas + array[i];
        contador = contador + 1;
    }

    promedioNotas = totalNotas / cantidadNotas;

    printf("El total de las notas es de %.2f \n", totalNotas);
    printf("El promedio de las notas totales de %.2f \n", promedioNotas);

    system("pause");
}