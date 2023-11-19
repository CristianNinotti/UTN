/* 5. Crear una función que reciba un número cualquiera y que devuelva como resultado
la suma de sus dígitos */

#include <stdio.h>
#include <stdlib.h>

sumaDigitos(int numero1); // Prototipo

void main()
{
    int numeroIngresado, resultado;

    printf("Ingrese un numero para sumar todos sus digitos");
    scanf("%d", &numeroIngresado);
    resultado = sumaDigitos(numeroIngresado);
    
    printf("La suma total de todos sus digitos es %d \n", resultado);

    system("pause");
}

sumaDigitos(int numero1)
{
    for(int i = 0; i < numero1; i++)
    {
        
    }
}