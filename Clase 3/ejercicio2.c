#include <stdio.h>                 
#include <stdlib.h>                

// Ingresar tres valores, sumarlos e imprimir esa suma.


int main()
{

    int numero1,numero2,numero3,total;
    
    printf("Ingrese un numero: \n");
    scanf("%i", &numero1);

    printf("Ingrese otro numero: \n");
    scanf("%i", &numero2);

    printf("Ingrese otro numero: \n");
    scanf("%i", &numero3);

    total = numero1 + numero2 + numero3;

    printf("El total es %i\n", total);

    system("pause");
    return 0;
}