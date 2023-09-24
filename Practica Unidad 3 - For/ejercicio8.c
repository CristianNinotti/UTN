// 8. Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del
// número.


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, num1, multiplo;
    printf("Ingrese un numero para saber sus multiplicadores \n");
    scanf("%d", &num1);


    multiplo=0;
    
    for (i=0; i<=10 ;i++)
    {
        multiplo = num1 * i;
        printf("El multiplo del numero ingresado %d por %d es igual a %d \n", num1, i, multiplo);
    }

    system("pause");

}
