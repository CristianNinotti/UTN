/* 3. Crear una función que devuelva la primera letra de una cadena de texto. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char primera(char letra[]); // Prototipo de la funcion letra

void main()
{

char array[50] = {};

printf("Ingrese una palabra \n");
scanf("%c", array);

char primeraLetra = primera(array);

printf("La Primera letra de nuestro array es: %c \n", primeraLetra);


system("pause");
}

char primera(char letra[])
{
    if (strlen(letra)>0)
    {
        return letra[0];
    }
    else
    {
        printf("La cadena se encuentra vac%ca \n", 161);
    }
}