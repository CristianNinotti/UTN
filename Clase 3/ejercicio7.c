#include <stdio.h>                 
#include <stdlib.h>     

// Ejercicio 7: Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su sueldo e imprimirlo


int main()
{

    int horasTrabajadas;
    float valorHora,total;

    printf("Ingrese el valor de la hora del empleado:\n");
    scanf("%f", &valorHora);

    printf("Ingrese las horas trabajadas del empleado en numeros enteros:\n");
    scanf("%i", &horasTrabajadas);

    total = valorHora*horasTrabajadas;

    printf("El valor total a pagar al empleado es de: %f\n", total);

    system("pause");
    return 0;

}

// funcion round(libreria math)