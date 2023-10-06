/* 8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, k;
    int array1[5];
    int array2[5];
    int array3[10];

    printf("Numeros para el primer array \n");

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese numero \n", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Numeros para el segundo array \n");

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese numero \n", i + 1);
        scanf("%d", &array2[i]);
    }
    for (i = 0; i < 5; i++)
    {
        array3[i] = array1[i];
    }

    for (i = 0; i < 5; i++)
    {
        array3[i + 5] = array2[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d , ", array3[i]);
    }

    system("pause");
}