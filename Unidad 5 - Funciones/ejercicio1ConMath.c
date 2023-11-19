/* 1. Crear una función que calcule el cubo de un número real (float). El resultado deberá
ser otro número real */

#include <stdio.h>
#include <stdlib.h>

float cuboNumero(float numero1); // Prototipo

void main()
{

    float numero1, resultado, cubo;

    printf("Ingrese un numero \n");
    scanf("%f", &numero1);

    cubo = cuboNumero(numero1);
    printf("El cubo del numero ingresado es %.2f \n", cubo);
}

float cuboNumero(float num1)
{

    float resultado = num1 * num1 * num1;
    return resultado;
}