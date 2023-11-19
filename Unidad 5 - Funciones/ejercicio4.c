/* 4. Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
número primo o 0 en caso contrario. */


#include <stdio.h>
#include <stdlib.h>


int esPrimo(int num1); // Prototipo

void main()
{

int numero1, resultado;

    printf("Ingrese un numero para verificar si es primo o no \n");
    scanf("%d", &numero1);

    resultado = esPrimo(numero1);

    if (resultado == 1)
    {
        printf("El numero ingresado no es primo \n");
    }
    else
    {
        printf("El numero ingresado es primo \n");
    }
    



    system("pause");
}

int esPrimo(int num1)
{

int resultado;

for (int i = 2; i < num1; i++)
{
    if (num1%i ==  0)
    {
        resultado = 1;
        i = num1 -1;
    }
    else
    {
        resultado = 0;
        i = num1 -1;
    }
}
    return resultado;

}