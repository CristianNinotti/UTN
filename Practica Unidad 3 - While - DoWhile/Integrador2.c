/* Ejercicio Integrador 2
Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa
que permita ingresar los datos de las ventas realizadas.
* Primero, requerir al empleado la cantidad de ventas que necesita registrar.
* Luego, para cada venta deberá ingresar el DNI del cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999).
* Ingresar el monto de la venta
* Validar que todos los datos ingresados por el empleado para una
venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta
actual.
* El medio de pago: 1 - Efectivo, 2 - Tarjeta de crédito,
* si la venta fue con tarjeta, pedir que ingrese una opción de las siguientes: 1 - Visa, 2 - American Express, 3
- Mercado Pago, 4 - Cabal.
* Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o
12).
* El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas
y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si la venta
es en efectivo o en cuotas.


* Para cada venta, presentar un resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784

* Al finalizar el registro, mostrar la suma total de las ventas ingresadas. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

    int cantVentas, i, dni, tipoPago, opcionTarjeta, cantCuotas;
    float montoVenta, costoFinal, sumaTotal;

    printf("Ingrese la cantidad de ventas que desea realizar \n");
    scanf("%d", &cantVentas);

    sumaTotal = 0;
    costoFinal = 0;
    montoVenta = 0;

    
    for (i = 1; i <= cantVentas; i++)
    {
        printf("Ingrese su dni \n");
        scanf("%d", &dni);

        while (dni < 1000000 || dni > 99999999)
        {
            printf("Ingrese un dni valido superior a 100000 e inferior a 9999999 \n");
            scanf("%d", &dni);
        }

        printf("Ingrese el monto de la venta \n");
        scanf("%f", &montoVenta);

        if(montoVenta < 1)
        {
            i = i + 1;
            printf("Valor venta invalido \n");
                    printf("Ingrese su dni \n");
        scanf("%d", &dni);

        while (dni < 1000000 || dni > 99999999)
        {
            printf("Ingrese un dni valido superior a 100000 e inferior a 9999999 \n");
            scanf("%d", &dni);
        }

        printf("Ingrese el monto de la venta \n");
        scanf("%f", &montoVenta);
        }

        printf("Seleccione el medio de pago: \n");
        printf("1 - Efectivo \n");
        printf("2 - Tarjeta de credito \n");
        scanf("%d", &tipoPago);
        
        while(tipoPago > 2 || opcionTarjeta < 1)
            {
                printf("Opcion de tarjeta invalida entre 1 y 2 \n");
                scanf("%d", &tipoPago);
            }

        if(tipoPago == 1)
        {
            costoFinal = montoVenta;
        }
        else
        {
            printf("Ingrese la tarjeta con la que desea abonar: \n");
            printf("1 - Visa \n");
            printf("2 - American Express \n");
            printf("3 - Mercado Pago \n");
            printf("4 - Cabal \n");
            scanf("%d", &opcionTarjeta);

            while(opcionTarjeta > 4 || opcionTarjeta < 1)
            {
                printf("Opcion de tarjeta invalida entre 1 y 4 \n");
                scanf("%d", &opcionTarjeta);
            }

            printf("Ingrese la cantidad de cuotas con la que desea abonar \n");
            printf("1 - 1 Cuota \n");
            printf("2 - 3 Cuotas \n");
            printf("3 - 6 Cuotas \n");
            printf("4 - 12 Cuotas \n");
            scanf("%d", &cantCuotas);

                while(cantCuotas > 4 || cantCuotas < 1)
            {
                printf("Opcion de cuotas invalida entre 1 y 4 \n");
                scanf("%d", &cantCuotas);
            }

            switch(cantCuotas)
            {
            case 1: 
            costoFinal = montoVenta;
            break;
            case 2:
            costoFinal = montoVenta + (montoVenta * 0.04);
            break;
            case 3:
            costoFinal = montoVenta + (montoVenta * 0.08);
            break;
            case 4:
            costoFinal = montoVenta + (montoVenta * 0.08); 
            break;
            }
        }

        printf("El resumen para esta venta %d \n", i);
        printf("DNI: %d \n", dni);
        printf("Medio de pago: %d \n", tipoPago);
            if(tipoPago == opcionTarjeta)
            {
                printf("Tarjeta: %d \n", opcionTarjeta);
                printf("Cuotas: %d \n", cantCuotas);
            }
        printf("Total: %.2f \n", costoFinal);
        sumaTotal = sumaTotal + costoFinal;
    }
    printf("El monto total de ventas realizadas por todos los vendedores es de %.2f \n", sumaTotal);

    system("pause");
}
