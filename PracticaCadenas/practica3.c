/* 3. Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, concatenar de la forma
"nombre apellido" para cada uno, y mostrar por consola.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{

char nombres[2][50] = {};           //2 nombres, con 50 caracteres cada 1
char apellidos[2][50] = {};         //2 apellidos, con 50 caracteres cada 1

for (int i = 0; i < 2; i++)
{
    printf("Ingrese el nombre \n", i+1);
    scanf("%s", nombres[i]);
    printf("Ingrese el apellido \n", i+1);
    scanf("%s", apellidos[i]);
}


for (int i = 0; i < 2; i++)
{
    char nombreApellido[40] = {""};
    strcpy(nombreApellido, nombres[i]);                     // copia el primer parametro del array y lo mete en nombre y apellido array nuevo
    strcat(nombreApellido, " ");                            // Separacion en la concaten (Concatena el primero con la separacion)
    strcat(nombreApellido, apellidos[i]);                   // Concatena nombre + separacion + apellido 
    printf("%s El nombre y apellido es: \n", nombreApellido);   // Los Imprime por ciclo
}

system("pause");
}