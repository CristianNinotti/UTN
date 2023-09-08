// 4. Imprimir los números del 10 al 1 uno abajo del otro.

#include <stdio.h>
#include <stdlib.h>

void main ()
{
int i, suma;    
    for(i=1; i<=10; i+=2)
    {
        suma=suma+i;

    }
    printf("La suma de los numeros impares total es de %d \n", suma);
    system("pause");
}