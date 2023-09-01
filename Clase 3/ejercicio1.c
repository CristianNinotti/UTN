#include <stdio.h>                 
#include <stdlib.h>                

// Ingresar dos valores enteros, sumarlos e imprimir esta suma.


int main()
{

    int numero1,numero2,total;

    printf("Ingrese un numero: \n");
    scanf("%i", &numero1);

    printf("Ingrese otro numero: \n");
    scanf("%i", &numero2);

    total = numero1 + numero2;

    printf("El total es %i\n", total);

    system("pause");
    return 0;
}