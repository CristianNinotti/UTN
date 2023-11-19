/* 2. Crear una función llamada “signo”, que reciba un número real, y devuelva un número
entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero. */

#include <stdio.h>
#include <stdlib.h>

float signo(float numero); // Prototipo

void main()
{

    float num1;
    int retorno;

    printf("Ingrese un numero real \n");
    scanf("%d", &num1);
    retorno = signo(num1);
    printf("Resultado de la funcion signo %d \n", retorno);

    system("pause");
}

float signo(float numero)
{
    int retorno;
    if (numero > 0)
    {
        retorno = 1;
    }
    else if (numero == 0)
    {
        retorno = 0;
    }
    else
    {
        retorno = -1;
    }
    return retorno;
}