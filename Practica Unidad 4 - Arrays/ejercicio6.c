/* 6. Ingrese por teclado la facturación de los últimos 6 meses. Informar:
a. La facturación total
b. El promedio de facturación
c. La máxima facturación
d. La mínima facturación */

#include <stdio.h>
#include <stdlib.h>

void main()
{
int contador, i;
float facturacionTotal, promedioFacturacion, menorFacturacion, mayorFacturacion;
float array[6];

contador = 0;
menorFacturacion = array[0];
mayorFacturacion = 0;

for(i = 0; i < 6; i++)
{
    printf("Ingrese la facturacion del mes %d \n", i+1);
    scanf("%f", &array[i]);

    facturacionTotal = facturacionTotal + array[i];
    contador = contador + 1;
    
    if(array[i] < menorFacturacion)
    {
        menorFacturacion = array[i];
    }

    if(array[i] > mayorFacturacion)
    {
        mayorFacturacion = array[i];
    }

}
    promedioFacturacion = facturacionTotal / contador;
    printf("Facturacion total es de %.2f \n", facturacionTotal);
    printf("El promedio de la facturacion de estos 6 meses es de %.2f \n", promedioFacturacion);
    printf("La mayor facturacion en un mes es de %.2f \n", mayorFacturacion);
    printf("La menor facturacion en un mes es de %.2f \n", menorFacturacion);
    system("pause");
}