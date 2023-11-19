#include <stdio.h>
#include <stdlib.h>


float sumar(float num1, float num2)
{
    float respuesta;
    respuesta = num1 + num2;
    return respuesta;
}


void main()
{

    float numero1, numero2, numero3, resultado;

    printf("Ingrese primer numero \n");
    scanf("%f", &numero1);

    printf("Ingrese segundo numero \n");
    scanf("%f", &numero2);

    resultado = sumar(numero1,numero2);

    printf("Ingrese tercer numero \n");
    scanf("%f", &numero3);

    resultado = sumar(resultado, numero3);

    printf("La suma es %.2f \n", resultado);


    system("pause");
}



// double, pow(double base, double exponent);