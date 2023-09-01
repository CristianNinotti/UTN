/* 2- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla. Informar también si los números son iguales. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;

    printf("Ingrese un numero\n");
    scanf("%i", &num1);

    printf("Ingrese otro numero\n");
    scanf("%i", &num2);

    if (num1>num2)
    {
        printf("El numero %i es mayor que %i", num1, num2);
    }
        else if (num1==num2)
        {
            printf("El numero %i es igual que %i", num2, num1);
        }
    else 
    {
        printf("El numero %i es mayor que el %i", num2, num1);
    }    

    return 0;
    system("pause");
}