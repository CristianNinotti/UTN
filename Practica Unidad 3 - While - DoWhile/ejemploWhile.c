#include <stdio.h>
#include <stdlib.h>

void main()
{
    int valor;

    valor=1;
    

   while(valor!=0)
    {
        printf("Ingrese un valor entero (0 para finalizar): \n");
        scanf("%d", &valor);
        
        if(valor!=0)
        {
            printf("Valor ingresado %d \n", valor);
        }
    } 
    
}