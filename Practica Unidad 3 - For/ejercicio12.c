/* 12. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{

    for(int i = 1; i <= 10; i ++)
    {
        printf("@ \n");
        for(int j = 1; j <= i; j ++)
        {
            printf("@ \n");
        }
       
    }

    


    system("pause");
}