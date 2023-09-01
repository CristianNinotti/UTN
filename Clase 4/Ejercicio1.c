#include <stdio.h>                 
#include <stdlib.h>

void main() 
{

    int num1, num2;

    printf("Ingrese in numero:\n");
    scanf("%i", &num1);

    printf("Ingrese otro numero:\n");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("El numero mas grande es el numero %i que el numero %i\n", num1, num2);
    }    
    else if (num1 == num2)
    {
            printf("Ambos numeros son iguales %i == %i\n" ,num1 ,num2);
            
    }
    else
        {
            printf("El numero %i es mas grande que %i\n", num2, num1);
        }
        
    system("pause");

}