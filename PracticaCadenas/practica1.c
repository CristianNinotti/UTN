/* 1. Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

    char cadena1[] = "Hola mundo";          //10
    char cadena2[] = "Como estas?";         //11
    char cadena3[] = "Muy bien y vos?";     //15
   

    printf("%d \n", strlen(cadena1));
    printf("%d \n", strlen(cadena2));
    printf("%d \n", strlen(cadena3));

    printf("%s \n", cadena2);

    printf("El n%cmero ingresado es : \n", 163);
    printf("%cs el: \n", 144);

   
    // é   130
    // É   144
    // á   160
    // í   161
    // ó   162
    // ú   163
    // ñ   164

    system("pause");
}

