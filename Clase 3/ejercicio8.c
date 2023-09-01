#include <stdio.h>                 
#include <stdlib.h>     

// Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es $800 pesos, calcular su sueldo e imprimirlo

int main()
{
    int horasTrabajadas,valorHora;
    float total;
    valorHora = 800;

    printf("Ingresa la cantidad de horas trabajadas \n");
    scanf("%i", &horasTrabajadas);

    total = horasTrabajadas*valorHora;

    printf("el valor a pagar es de: %f\n", total);

    system("pause");
    return 0;



}