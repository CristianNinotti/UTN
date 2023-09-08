/* 12- Realizar un programa que permita registrar los datos para una venta de $4600. Para
ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
caso contrario informar la situación y finalizar programa. Por último, presentar un
resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784 */

#include <stdio.h>
#include <stdlib.h>

void main()
{

    float venta, interes3Cuotas, interes3o12Cuotas;
    int dni, cantCuotas, opcion, opcion2, opcion3;
    venta = 4600;
    do
    {
        printf("Ingrese su DNI \n");
        scanf("%i", &dni);
        if (dni > 99999999 || dni < 1000000)
            printf("Ingrese un dni mayor a 1000000 o menor a 99999999 \n");
    } while (dni > 99999999 || dni < 1000000);

    printf("Selecione su metodo de pago \n");
    printf("1-Efectivo \n");
    printf("2-Tarjeta de credito \n");
    scanf("%i", &opcion);
    if (opcion == 1)
    {
        venta = venta;
        printf("Cliente DNI Numero: %i \n", dni);
        printf("El costo de su compra es de: %.2f \n", venta);
        printf("Medio de pago: Efectivo \n ");
    }
    else if (opcion == 2)
    {
        printf("Selecione la tarjeta de su banco \n");
        printf("1-Visa \n");
        printf("2-American express \n");
        printf("3-Mercado pago \n");
        printf("4-Cabal \n");
        scanf("%i", &opcion2);

        printf("En cuantas cuotas lo desea abonar? \n");
        printf("Opcion 1: 1 Cuota \n");
        printf("Opcion 2: 3 Cuotas \n");
        printf("Opcion 3: 6 Cuotas \n");
        printf("Opcion 4: 12 Cuotas \n");
        scanf("%i", &opcion3);

        switch (opcion3)
        {
        case 1:
            venta = venta;

            printf("Su costo final de su compra es de: %.2f \n", venta);
            break;

        case 2:
            venta = venta * 1.04;

            printf("Su costo final de su compra es de: %.2f \n", venta);
            break;
        case 3:
            venta = venta * 1.08;

            printf("Su costo final de su compra es de: %.2f \n", venta);
            break;
        case 4:
            venta = venta * 1.08;

            printf("Su costo final de su compra es de: %.2f \n", venta);
            break;
        default:
            printf("Ingrese una opcion valida \n");
            break;
        }
    }
    else
    {
        printf("Ingrese una opcion valida \n");
    }

    if (opcion == 1)
    {
        printf("Medio de pago: Efectivo \n");
    }
    else if (opcion == 2)
    {
        printf("Medio de pago: Tarjeta \n");

        if (opcion2 == 1)
        {
            printf("Tarjeta: Visa \n");
        }
        else if (opcion2 == 2)
        {
            printf("Tarjeta: American Express \n");
        }
        else if (opcion2 == 3)
        {
            printf("Tarjeta: Mercado pago \n");
        }
        else if (opcion2 == 4)
        {
            printf("Tarjeta: Cabal \n");
        }
        if (opcion3 == 1)
        {
            printf("Cantidad de cuotas: 1 \n");
        }
        else if (opcion3 == 2)
        {
            printf("Cantidad de cuotas: 3 \n");
        }
        else if (opcion3 == 3)
        {
            printf("Cantidad de cuotas: 6 \n");
        }
        else if (opcion3 == 4)
        {
            printf("Cantidad de cuotas: 12 \n");
        }
    }
    printf("Cliente DNI Numero: %i \n", dni);
    printf("Precio final: %.2f \n", venta);

    system("pause");
}