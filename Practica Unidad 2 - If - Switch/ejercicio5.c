/* Escriba un programa que pida ingresar un número y a continuación escriba en la
consola si el mismo es par o impar */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num1;
    printf("Ingrese un numero para verificar si es par o impar\n");
    scanf("%i", &num1);

    if (num1%2==0)
    {
        printf("El numero %i es par !!\n", num1);
    }
    else 
        printf("El numero %i es impar :( \n", num1);

}