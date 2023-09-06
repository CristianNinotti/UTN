/* Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
dicha situación.*/

#include <stdio.h>
#include <stdlib.h>

float main ()
{
    float venta1, descuento;

    printf("Ingrese el valor de la venta para aplicar el descuento correspondiente \n");
    scanf("%f", &venta1);

    if (venta1>= 100000)
    {
        descuento = venta1 - venta1*0.15;
        printf("Precio final a pagar es %f \n", descuento);
    }
        else if (venta1<= 100000)
        {   
            descuento = venta1 - venta1*0.10;
            printf("Precio final a pagar es %f \n", descuento);
        }
            else if (venta1==0)
            {
                printf("La venta debe ser superior a 0 \n");
            }
                else 
                {
                    printf("Ingrese un caracter valido \n");
                }

    return 0;
    system("pause");                
}