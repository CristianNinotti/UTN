/* 2. Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

    int i, sumaTotal, promedio;

    int array[] = {30, 50, 60, 70, 90};

    for (i = 0; i < 5; i++)
    {
        sumaTotal = sumaTotal + array[i];
    }

    printf("Suma total %d \n", sumaTotal);
    promedio = sumaTotal / 5;
    printf("El promedio total es %d \n", promedio);

    system("pause");
}