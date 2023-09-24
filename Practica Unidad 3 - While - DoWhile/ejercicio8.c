/* 8. Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para
calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘1’ a la ‘5’, y
no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados
por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas.
Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita
mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es
el 2,5% de la suma de sus ventas. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vendedores;
    float montoVenta, comision, sumaVenta;
    int i;

    for (i = 1; i <= 5; i++)
    {
        sumaVenta = 0;
        do
        {
            printf("Ingrese 0 para no ingresar mas ventas \n");
            printf("Ingrese el importe de venta \n");
            scanf("%f", &montoVenta);
            sumaVenta = sumaVenta + montoVenta;
        } while (montoVenta != 0);
        comision = sumaVenta * 0.025;
        printf("La comision del vendedor %d es de %.2f \n", i, comision);
    }
    
    system("pause");
}