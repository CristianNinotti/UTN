/* 10. Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal. */


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
    int suma = 0;

   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i != j)
            {
                suma = suma + matriz[i][j];
            }
        }
    }
    printf("La suma total es: %d \n", suma);


    system("pause");
}