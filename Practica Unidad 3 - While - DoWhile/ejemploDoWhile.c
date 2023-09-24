#include <stdio.h>
#include <stdlib.h>

void main()
{
    int valor;

    printf("Ingrese un valor entero (0 para finalizar): \n");
    

    do
    {
        scanf("%d", &valor);
        
        if(valor!=0)
        {
            printf("Valor ingresado %d \n", valor);
        }
    } while(valor!=0);
    
}