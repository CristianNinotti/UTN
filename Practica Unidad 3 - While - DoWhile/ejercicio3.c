/* 3. Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
usuario la suma de los 10 números ingresados.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, sumador, i;

    sumador = 0;
    for (i = 1; i <= 10; i++)
        
    {
        do
        {
            printf("Ingrese un numero positivo no nulo \n");
            scanf("%d", &num);

            if (num <= 0)
            {
                printf("Numero invalido \n");
            }
            else
            {
                sumador = sumador + num;
            }

        } while (num <= 0);
    }
    printf("La suma total es: %d \n", sumador);
    system("pause");
}
