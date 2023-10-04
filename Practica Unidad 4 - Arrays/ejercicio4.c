/* 4. Dado el vector 
a. Informar el vector de la forma: "Indice: X, Valor: Y".
b. Totalizar el vector e informar el total.
c. Informar el contenido de las posiciones impares.
d. Informar las posiciones que contienen números impares.
e. Informar el mayor número.
f. Informar cuántas veces aparece el número 20. */


#include <stdio.h>
#include <stdlib.h>


void main()
{

int sumaTotal, impar, numMayor, acumulador20;
int vector[] = {10, 20, 5, 15, 30, 20};

numMayor = 0;
acumulador20 = 0;
sumaTotal = 0;


for (int i = 0; i < 6; i++)
{
    printf("El indice: %d, Y el Valor: %d \n", i, vector[i]);
    printf("_______________________________________________\n");

    //b. Totalizar el vector e informar el total.

    sumaTotal = sumaTotal + vector[i];
    
    // c. Informar el contenido de las posiciones impares.
    
    if(i%2 == 1)
    {  
        printf("Numero en indice impar: %d \n", vector[i]);   
    }

    // d. Informar las posiciones que contienen números impares.

    if(vector[i]%2 == 1)
    {  
        printf("El indice %d en la posicion impar y su valor es: %d \n", i, vector[i]);   
    }

    //e. Informar el mayor número.

    if (numMayor < vector[i])
    {
        numMayor = vector[i];
    }

    // f. Informar cuántas veces aparece el número 20. */

    if (vector[i] == 20)
    {
        acumulador20 = acumulador20 + 1;   
    }
}
    printf("El numero mayor es %d \n", numMayor);
    printf("La cantidad de numeros 20 que se repite en el vector es %d \n", acumulador20);
    printf("La suma total es %d \n", sumaTotal);

system("pause");
}