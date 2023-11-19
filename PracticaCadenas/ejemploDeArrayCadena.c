#include <stdio.h>
#include <stdlib.h>

// Realizar un programa que permita ingresar al usuario su nombre y lo muestre por consola

void main()
{
    char nombreUsuario[50]; // Dimension hasta 50 caracteres

    printf("Ingrese su nombre \n");
    // scanf("%s", &nombreUsuario);  // %s  - Cadena - String  (Solo 1 nombre, nombres compuestos no)
    fgets(nombreUsuario, sizeof(nombreUsuario), stdin); // Nombres compuestos si, la funcion fgets

    printf("El nombre ingresado es: %s \n", nombreUsuario);

    system("pause");
}