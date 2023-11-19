/* Escriba un programa que pida ingresar un numero y a continuacion escriba en la consola si el mismo es par o impar*/

/* Escriba una funcion llamada esPar que reciba un numero entero y que devuelva 1 si el numero ingresado es par, cero en caso contrario*/

/* Hacer un programa que muestre el cuadrado de un numero si es impar y el cubo del numero si es par*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{

    int num1, resultado, numeroPar;

    printf("Ingrese un numero \n");
    scanf("%d", &num1);

    numeroPar = esPar(num1);

    printf("%d \n", numeroPar);

    if (numeroPar == 1)
    {
        printf("El numero es par y su cubo es %.2f \n", pow(num1, 3)); // Cubo de un numero
    }
    else
    {
        printf("El numero es impar y su cuadrado es %.2f \n", pow(num1, 2)); // Cuadrado de un numero
    }

    system("pause");
}

int esPar(int num)
{
    int resultado = 0;

    if (num % 2 == 0)
    {
        resultado = 1;
    }

    return resultado;
}
