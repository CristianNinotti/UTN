/* 7. Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de
datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
float num, respuesta;
int contador;

contador = 0;

    do
    {
        printf("Ingrese un numero \n");
        scanf("%f", &num);

        contador ++;

        printf("Ingrese un numero distinto de 0 para continuar \n");
        scanf("%d", &respuesta);

    } while (respuesta != 0);

    printf("Los numeros ingresados fueron %d \n", contador);

    system("pause");
}