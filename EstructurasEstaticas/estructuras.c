#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir un struct
struct Alumno
{
    int dni;
    float nota;
    char nombre[50];
};

// Definri un array de estructura

struct Cliente
{

    int dni;
    int telefono;
    char nombre[50];
};

// Datos estaticos

void main()
{

    struct Alumno alumno1;
    struct Alumno alumno2;
    struct Alumno alumno3;

    alumno1.dni = 25564789;
    alumno1.nota = 8;
    strcpy(alumno1.nombre, "Critian"); // Asi se pone para ingresar cadenas

    alumno2.dni = 34732713;
    alumno2.nota = 89;

    // Que los ingrese el usuario

    printf("Ingrese el dni del alumno \n");
    scanf("%d", &alumno3.dni);

    printf("Ingrese la nota del alumno \n");
    scanf("%d", &alumno3.nota);

    printf("Ingrese la nota del alumno \n");
    scanf("%s", &alumno3.nombre);

    // Para nombres compuestos

    // Consumir el caracter de salto de linea, antes de llamar a fgets
    getchar();
    // O limpiar el buffer

    fflush(stdin);

    fgets(alumno3.nombre, sizeof(alumno3.nombre), stdin); // stdin donde tiene que ir a buscar la entrada;

    // Printear el contenido

    printf("El dni del alumno 1 es %d \n", alumno1.dni);
    printf("la nota del alumno 1 es %d \n", alumno1.nota);
    printf("El nombre del alumno 1 es %s \n", alumno1.nombre);

    // Arreglo de estructuras

    int tam = 10;

    struct Cliente clientes[10];

    for (int i = 0; i < tam; i++)
    {
        printf("Ingrese el dni del cliente \n");
        scanf("%d", &clientes[i].dni);

        printf("Ingrese numero de telefono \n");
        scanf("%d", &clientes[i].telefono);

        printf("Ingrese nombre completo \n");
        getchar();
        fgets(clientes[i].nombre, sizeof(clientes[i].nombre), stdin); //clientes[i].nombre donde se almacena
                                                                      // sizeof hasta 50 caracteres definidos
                                                                      // stdin la direccion donde lo tiene que buscar
                                                                      //fgets es la funcion que me junta 2 nombres compuesto
                                                                      // Ejemplo: Cristian Ninotti
    }
}