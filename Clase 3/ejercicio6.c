#include <stdio.h>                 
#include <stdlib.h>     

// Ingresar dos valores, calcular su suma, su producto y la resta del 1er numero menos el 2do valor ingresado,imprimir los resultados

int main()
{

    float numero1,numero2,suma,resta,multiplicacion;

    printf("Ingrese un numero: \n");
    scanf("%f", &numero1);

    printf("Ingrese otro numero: \n");
    scanf("%f", &numero2);

    suma = numero1 + numero2;

    printf("la suma es %f\n", suma);

    resta = numero1 - numero2;

    printf("la resta del primero numero menos el segundo numero es es %f\n", resta);

    multiplicacion = numero1 * numero2;

    printf("el producto de ambos numeros es %f\n", multiplicacion);


    system("pause");
    return 0;
}