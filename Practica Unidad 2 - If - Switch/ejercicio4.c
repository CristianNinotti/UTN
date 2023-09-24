/* Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
pantalla.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;

    printf("Ingrese un numero\n");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero\n");
    scanf("%i", &num2);

    printf("Ingrese el tercero numero\n");
    scanf("%i", &num3);

    if (num1>num2 && num1>num3)
    {
        printf("El numero %i es el numero mayor entre los 3\n", num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("El numero %i es el numero mayor entre los 3\n",num2);
    }
    else if(num1==num2 && num2==num3)
    {
        printf("Los 3 numeros son iguales\n");
    }
    else if(num1==num2 || num2==num3)
    {
        printf("Hay dos numeros iguales\n");
    }      
    
    else 
    {
        printf("El numero %i es el numero mayor entre los 3\n", num3);
    }
    
    return 0;
    system("pause");
}

