/* 2. Generar un bucle while infinito. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1;
    printf("Ingrese un numero \n");
    scanf("%d ", &num1);

    while(num1 > 0)
    {
        printf("%d \n", num1+1);
    }
    system("pause");
}