#include <stdio.h>                 
#include <stdlib.h>                

int main()                         
{

    int total; //declaracion de la variable total

    total = 165; //asignacio de la variable total

    // total = total +20;

    total += 20; // esto es similar a la linea 10, pero utilizando el operador compuesto +=

    /*

        total = total + 1;
        total += total;
        
    
    */

    int edad = 35; //declaracion y asignacion de la variable edad

    int numero;

    printf("Ingrese un numero: \n");
    scanf("%i", &numero); // asignando la variable numero a travez de la funcion scanf
    printf("Otra linea\n");

    int contador;

    printf("El valor de la variable contador es: %i\n", contador);

    printf("El valor de la variable total %i y el valor de edad es %i\n", total , edad);
    printf("%i ejemplo en el directamente imprimo un numero y no un valor de variable\n", 765);

    // printf("765 ejemplo en el que  que directamente imprimo un numero y no un valor de una variable\n");


    system("pause");
    return 0;

    
}


