/* 2. Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()

{

    char nombre1[50];
    char nombre2[50];

    printf("Ingrese un nombre \n");
    scanf("%s", nombre1);

    printf("Ingrese otro nombre \n");
    scanf("%s", nombre2);
    printf("______________ \n");

    // printf("%s \n", nombre1);
    // printf("%s \n", nombre2);

    
    int nueva1 =  strcmp(nombre1,nombre2);
    int nueva2 = strcmp(nombre2,nombre1);

    if (nueva1 < 0)
    {
        printf("%s \n", nombre1);
        printf("%d \n", nueva1);                 //-1 si precede alfabeticamente nueva1 de nueva2
    }
    else if (nueva2 < 0)
    {
        printf("%s \n", nombre2);
        printf("%d \n", nueva2);                  //-1 si es precede alfabeticamente nueva2 de nueva1
    }
    else
    {
        printf("Los arrays son iguales \n");      
        printf("%d \n", nueva1);                 //0 si son iguales
    }


    system("pause");
}