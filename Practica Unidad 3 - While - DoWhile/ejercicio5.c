/* 5. Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int dni, notaParcial, dni_ingresado, contador;

    dni = 34732713;
    notaParcial = 10;
    dni_ingresado = 0;
    contador = 3;

    while (contador > 0)
    {
        printf("Ingrese el dni para verificar su nota \n");
        scanf("%d", &dni_ingresado);
        if (dni == dni_ingresado)
        {
            printf("Bienvenido al sistema \n");
            break;
        }
        else 
        {
            contador --;
            printf("Le quedan un total de %d intentos \n", contador);
        }
    }
    system("pause");
}