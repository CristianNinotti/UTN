#include <stdio.h>
#include <stdlib.h>

// Prototipo de las funciones
void cargarProductos(int arrayCodigos[], char arrayDescripciones[][50], int arrayStock[], int tam);
void modificarStock(int arrayCodigos[], int arrayStock[], int cantidadProductos);
void mostrarProductosSinStock(int arrayCodigos[], char arrayDescripciones[][50], int arrayStock[], int cantidadProductos);
void listarProductos(int arrayCodigos[], char arrayDescripciones[][50], int arrayStock[], int cantidadProductos);

int main()
{

    int codigos[100];
    char descripciones[100][50];
    int stock[100];
    

    int cantidadProductos = 100;

    int opcion;

    do
    {
        printf("Menu:\n");
        printf("1. Cargar productos\n");
        printf("2. Modificar stock\n");
        printf("3. Mostrar productos sin stock\n");
        printf("4. Listar productos\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion != 5)
        {

            switch (opcion)
            {
            case 1:
                cargarProductos(codigos, descripciones, stock, cantidadProductos);
                break;
            case 2:
                modificarStock(codigos, stock, cantidadProductos);
                break;
            case 3:
                mostrarProductosSinStock(codigos, descripciones, stock, cantidadProductos);
                break;
            case 4:
                listarProductos(codigos, descripciones, stock, cantidadProductos);
                break;
            default:
                printf("Opcion no válida. Intente de nuevo.\n");
            }
        }
    } while (opcion != 5);

    system("pause");
    return 0;
}

void cargarProductos(int arrayCodigos[], char arrayDescripciones[][50], int arrayStock[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("C%cdigo de barras del electrodom%cstico: ", 162, 130);
        scanf("%d", &arrayCodigos[i]);
        
        printf("Cantidad en stock: ");
        scanf("%d", &arrayStock[i]);

        printf("Ingrese la descripci%cn: ", 162);
        scanf("%s", &arrayDescripciones[i]);
        
    }
}

void modificarStock(int arrayCodigos[], int arrayStock[], int tam)
{
    int codigoModificar, nuevaCantidad;
    int encontrado = 0;

    printf("Ingrese el codigo: ");
    scanf("%d", &codigoModificar);

    for (int i = 0; i < tam; i++)
    {
        if (arrayCodigos[i] == codigoModificar)
        {
            printf("Ingrese la nueva cantidad en stock: ");
            scanf("%d", &nuevaCantidad);
            arrayStock[i] = nuevaCantidad;
            encontrado = 1;
        }
    }

    if (!encontrado)
    {
        printf("Electrodomestico inexistente.\n");
    }
}

void mostrarProductosSinStock(int arrayCodigos[], char arrayDescripciones[][50], int arrayStock[], int tam)
{
    printf("Electrodomesticos sin stock:\n");
    for (int i = 0; i < tam; i++)
    {
        if (arrayStock[i] == 0)
        {
            printf("Codigo: %d, Descripcion: %s\n", arrayCodigos[i], arrayDescripciones[i]);
        }
    }
}

void listarProductos(int arrayCodigos[], char arrayDescripciones[][50], int arrayStock[], int tam)
{
    printf("Listado de electrodomesticos:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("Codigo de barras: %d, Descripcion: %s, Stock: %d\n", arrayCodigos[i], arrayDescripciones[i], arrayStock[i]);
    }
}