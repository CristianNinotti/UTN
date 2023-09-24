/* 6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio */


#include <stdio.h>
#include <stdlib.h>


void main()
{
int respuesta, contador;
float suma,prom, nota;

contador = 0;
suma = 0;
prom = 0;


do
{


   printf("Ingrese la nota \n");
   scanf("%f", &nota);

    suma = suma + nota;
    contador ++;
   
    printf("Desea realizar otra nota ? ingrese 1 para continuar ingresando \n");
    scanf("%d", &respuesta);


} while (respuesta == 1);
prom = suma / contador;

printf("El promedio es %.2f \n", prom);

system("pause");
}