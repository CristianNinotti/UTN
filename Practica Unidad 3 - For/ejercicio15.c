/* 15. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

    int i, j;
    float sumador, nota, promedio, sumadorPromedios, promedioGeneral;

    for (i = 1; i <= 5; i++)
    {
        printf("Alumno %d ", i);
        sumador = 0;
        for (j = 1; j <= 3; j++)
        {
            printf("Ingrese la calificacion %d \n", j);
            scanf("%f", &nota);
            sumador = sumador + nota;
        }
        promedio = sumador / 3;
        printf("El promedio del alumno es %.2f \n", promedio);
        sumadorPromedios = sumadorPromedios + promedio;
    }
    promedioGeneral = sumadorPromedios / 5;
    printf("Promedio general es: %.2f \n", promedioGeneral);
}