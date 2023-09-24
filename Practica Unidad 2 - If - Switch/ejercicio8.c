/* 8- Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar. */

#include <stdio.h>
#include <stdlib.h>

float main()
{
    
float saldo, retiro;

saldo = 1000;

    printf("Su saldo es %f \n", saldo);
    printf("Cuanto desea retirar? \n");
    scanf("%f", &retiro);

        if(saldo>=retiro)
        {
        saldo = saldo-retiro;
        printf("Su saldo es de %f \n", saldo);
        }
            else if(saldo<retiro) 
            {
                printf("Su saldo es insuficiente para este retiro \n");
                printf("Su saldo es de %f \n", saldo);
            }

return 0;
system("pause");

}