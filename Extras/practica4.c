#include <stdio.h>
#include <stdlib.h>

void main()

{
    char nombreCompleto[100];

    printf("Ingrese su nombre \n");
    fgets(nombreCompleto, sizeof(nombreCompleto), stdin);

    printf("Nombre completo es: %s \n", nombreCompleto);






    system("pause");
}