/*  9 - Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor
o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”; si la
altura está entre 151 y 170 escriba el mensaje: “Persona de altura media” y si la altura
es mayor al 171 escriba el mensaje: “Persona de altura por arriba de la media” */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float altura;
    printf("Ingrese su altura en cm sin comas ni puntos para evaluarla \n");
    scanf("%f", &altura);

    if(altura<=150)
    {
        printf("Persona de altura por debajo de la media \n");
    }
        else if (altura<=170 && altura>=151)
        {
            printf("Persona de altura media \n");
        }
            else if(altura>=171)
            {
                printf("Persona de altura por arriba de la media \n");    
            }


system("pause");    
        
}