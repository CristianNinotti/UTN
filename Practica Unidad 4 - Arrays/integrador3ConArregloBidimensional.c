/* LC1 - Ejercicio Integrador 3
Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
opciones a resolver:
1. Cargar Alumnos
2. Buscar un alumno
3. Modificar la nota de un alumno
4. Mostrar un listado de los 10 alumnos
5. Salir
Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
mayor a 0 y menor o igual que 10.
La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
encuentra modificar la nota del alumno por la ingresada.
La opción 4 debe mostrar en la consola el listado de alumnos.
SÓLO se saldrá de la aplicación si se selecciona la opción 5. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int dniABuscar;
    float alumnos[10][2] = {0};
    // float alumnos[10][2] = {0};

    int opcion;
    int tam = 10; //cantidad de alumnos
    int tam2 = 1;
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
                // Cargar alumnos, validar rangos!
               for (int i = 0; i < tam; i++)
               {
                printf("Ingrese el dni del alumno \n");
                scanf("%d", &alumnos[i]);
                for (int j = 1; j < tam2; j++)
                {
                    printf("Ingrese la nota del alumno \n");
                    scanf("%f", &alumnos[j]);
                }
                }

               
                break;
            case 2:
                // Buscar un alumno con for
                printf("Ingrese el dni del alumno a buscar \n");
                scanf("%d", &dniABuscar);

                for (int i =0; i < tam; i++)
                {
                    if(dniABuscar == alumnos[i])
                    {
                        printf("La nota del alumno con dni %d", alumnos[i]);
                    }
                    else
                    {
                        printf("El dni es inexistente");
                    }
                }

                //buscar un alumno con while
                break;
            case 3:
                // Modificar una nota
               
                break;
            case 4:
                // Mostrar alumnos

                break;
            default:
                printf("opción inválida");
                break;
            }
        }
    } while (opcion != 5);


    system("pause");
}