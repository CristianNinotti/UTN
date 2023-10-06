 /* 9. Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array. */

#include <stdio.h>
#include <stdlib.h>

void main(){
    int primerosNum[5], numDuplicados[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el numero a guardar en la posicion del arreglo %d\n", i + 1);
        scanf("%d", &primerosNum[i]);
    }

    printf("////////////////////////////////////////////////////\n");

    for (int c = 0; c < 5; c++)
    {
        numDuplicados[c]= (primerosNum[c]*2);
        
    }

    printf("////////////////////////////////////////////////////\n");

    for (int c = 0; c < 5; c++)
    {
       printf("%d\n", numDuplicados[c]);
    }


system("pause");
}