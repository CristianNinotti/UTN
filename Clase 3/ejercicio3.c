#include <stdio.h>                 
#include <stdlib.h>                

// Ingresar los lados de un triangulo, calcular su perimetro e imprimirlo


int main()
{

    float lado1,lado2,lado3,perimetro;
    
    printf("Ingrese un lado del triangulo: \n");
    scanf("%f", &lado1);

    printf("Ingrese otro lado del triangulo: \n");
    scanf("%f", &lado2);

    printf("Ingrese el ultimo lado del triangulo: \n");
    scanf("%f", &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("El total es %f\n", perimetro);

    system("pause");
    return 0;
}