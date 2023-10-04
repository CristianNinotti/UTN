#include <stdio.h>
#include <stdlib.h>

void main()
{

    int num[6]; // Declaro un arreglo de tamaño 6 de tipo int

    num[0] = 5; // Primer alemento almacenado en indice 0
    num[1] = 8; //

    num[5] = 12; // Almacenoi 12 en el ultimo elemento del arreglo num

    int numeros[4] = {30, 50, 40, 25}; // Es lo mismo que declarado arriba pero mas simplificado.

    int numeros2[] = {30, 15, 30, 25, 60}; // Peudo omitir ponerle el tamaño al arreglo ya que los elemntos se sobre entiende //

    int i = 5;

    printf("En el indice %d está almacenado el valor %d \n", i, num[4]);
    printf("En el indice %d está almacenado el valor %d \n", i, num[i]);

    // primero pedir al usuario que ingrese 8 edades,
    // almacenarlas en un arreglo de nombre edades, luego mostrarlas y calcular su promedio

    int edades[8];

    for (i = 0; i < 8; i++)
    {
        printf("Ingrese edad %d \n", i+1);  // %d , i+ (para que se entienda que es la primer iteracion informacion)
        scanf("%d", &edades[i]);
    }

    // Indice: X, Valor: Y

    for (int i = 0; i < 8; i++)
    {
        printf("Indice: %d, Valor: %d \n", i, edades[i]);  // el primero es el indice, y el segundo es el valor en el indice de ese array
    }

    system("pause");
}