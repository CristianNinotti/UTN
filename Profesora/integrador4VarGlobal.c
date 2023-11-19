#include <stdio.h>
#include <stdlib.h>

int codigos[100];
char descripciones[100][50];
int stock[100];

int cantidadProductos = 100;

// Prototipo de las funciones
void cargarProductos();
void modificarStock();
void mostrarProductosSinStock();
void listarProductos();

int main()
{

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
                cargarProductos();
                break;
            case 2:
                modificarStock();
                break;
            case 3:
                mostrarProductosSinStock();
                break;
            case 4:
                listarProductos();
                break;
            default:
                printf("Opcion no válida. Intente de nuevo.\n");
            }
        }
    } while (opcion != 5);

    system("pause");
    return 0;
}

void cargarProductos()
{
    for (int i = 0; i < cantidadProductos; i++)
    {
        printf("C%cdigo de barras del electrodom%cstico: ", 162, 130);
        scanf("%d", &codigos[i]);

        printf("Cantidad en stock: ");
        scanf("%d", &stock[i]);

        printf("Ingrese la descripci%cn: ", 162);
        scanf("%s", &descripciones[i]);
    }
}

void modificarStock()
{
    int codigoModificar, nuevaCantidad;
    int encontrado = 0;

    printf("Ingrese el codigo: ");
    scanf("%d", &codigoModificar);

    for (int i = 0; i < cantidadProductos; i++)
    {
        if (codigos[i] == codigoModificar)
        {
            printf("Ingrese la nueva cantidad en stock: ");
            scanf("%d", &nuevaCantidad);
            stock[i] = nuevaCantidad;
            encontrado = 1;
        }
    }

    if (!encontrado)
    {
        printf("Electrodomestico inexistente.\n");
    }
}

void mostrarProductosSinStock()
{
    printf("Electrodomesticos sin stock:\n");
    for (int i = 0; i < cantidadProductos; i++)
    {
        if (stock[i] == 0)
        {
            printf("Codigo: %d, Descripcion: %s\n", codigos[i], descripciones[i]);
        }
    }
}

void listarProductos()
{
    printf("Listado de electrodomesticos:\n");
    for (int i = 0; i < cantidadProductos; i++)
    {
        printf("Codigo de barras: %d, Descripcion: %s, Stock: %d\n", codigos[i], descripciones[i], stock[i]);
    }
}
