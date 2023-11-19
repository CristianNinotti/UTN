#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alumno
{
    int dni;
    float nota;
    char nombre[50];
};

void main()
{

    struct Alumno alumnos[10];

    /*
        //ejemplo de variables alumno
        struct Alumno alumno1;
        struct Alumno alumno2;



        // carga del alumno 1
        alumno1.dni = 25435456;
        alumno1.nota = 8;
        // alumno1.nombre = "Eliana" //no puedo, es incorrecto
        strcpy(alumno1.nombre, "Eliana Gomez");

        // carga del alumno 2
        printf("Ingrese el dni del alumno 2\n");
        scanf("%d", &alumno2.dni);

        printf("Ingrese la nota del alumno 2\n");
        scanf("%d", &alumno2.nota);

        printf("Ingrese el nombre del alumno 2\n");
        //scanf("%s", &alumno2.nombre);
        getchar(); //consumir el caracter de salto de linea o fflush(stdin) o llamar a esta funcion para limpar el buffer
        fgets(alumno2.nombre, sizeof(alumno2.nombre), stdin);

        // salida
        printf("El dni del alumno 1 es %d \n", alumno1.dni);
        printf("La nota del alumno 1 es %d \n", alumno1.nota);
        printf("El dni del alumno 1 es %d \n", alumno1.dni);

    */

    int tam = 10;

    int opcion = 0;
    int dniIngresado = 0;
    float notaNueva;
    int encontrado = 0;

    do
    {
        printf("\nElija una opci%cn\n", 162);
        printf("1. Cargar alumnos\n");
        printf("2. Buscar un alumno\n");
        printf("3. Modificar una nota\n");
        printf("4. Mostrar alumnos\n");
        printf("5. Salir.\n\n");
        scanf("%d", &opcion);

        if (opcion != 5)
        {
            switch (opcion)
            {
            case 1:
                for (int i = 0; i < tam; i++)
                {
                    do
                    {
                        printf("Introduzca el dni del alumno %i\n", i + 1);
                        scanf("%d", &alumnos[i].dni);
                        if (alumnos[i].dni < 1000000 || alumnos[i].dni > 99999999)
                        {
                            printf("Nro. de DNI inv%clido\n", 160);
                        }

                    } while (alumnos[i].dni < 1000000 || alumnos[i].dni > 99999999);

                    do
                    {
                        printf("Ingrese la nota: \n");
                        scanf("%f", &alumnos[i].nota);
                        if (alumnos[i].nota < 0 || alumnos[i].nota > 10)
                        {
                            printf("Nota inv%clida\n", 160);
                        }

                    } while (alumnos[i].nota < 0 || alumnos[i].nota > 10);

                    scanf("%s", &alumnos[i].nombre);

                    printf("\n");
                }
                break;
            case 2:

                encontrado = 0;

                printf("Ingrese el dni del alumno a buscar: \n");
                scanf("%i", &dniIngresado);
                for (int i = 0; i < tam; i++)
                {
                    if (alumnos[i].dni == dniIngresado)
                    {
                        printf("\nDNI alumno: %i.\n", alumnos[i].dni);
                        printf("Nota: %.2f\n", alumnos[i].nota);

                        encontrado = 1;
                    }
                }

                if (encontrado == 0)
                {
                    printf("Alumno inexistente...\n");
                }
                break;
            case 3:

                encontrado = 0;

                printf("Ingrese el dni del alumno a buscar: \n");
                scanf("%i", &dniIngresado);

                for (int i = 0; i < tam; i++)
                {
                    if (alumnos[i].dni == dniIngresado)
                    {
                        printf("\nDNI alumno: %i.\n", alumnos[i].dni);

                        // aca falta validar nota
                        printf("Ingrese la nueva nota: ");
                        scanf("%f", &notaNueva);
                        alumnos[i].nota = notaNueva;
                        printf("\n La nueva nota del alumno fue cargada.\n");

                        encontrado = 1;
                    }
                }

                if (encontrado == 0)
                {
                    printf("Alumno inexistente...\n");
                }
                break;
            case 4:
                printf("Listado de alumnos: \n");

                for (int i = 0; i < tam; i++)
                {
                    printf("DNI alumno: %i. ", alumnos[i].dni);
                    printf("Nota: %.2f\n", alumnos[i].nota);
                }

                break;
            default:
                printf("La opci%cn ingresada es incorrecta.\n", 162);
                break;
            }
        }
    } while (opcion != 5);

    system("pause");
}
