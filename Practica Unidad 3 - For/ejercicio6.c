// 6. Suma de los 10 primeros números múltiplos de tres.

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int i, suma;
        for(i=3; i<=10;i +=3 )
        {
        suma=suma+i;
        }
        printf("%d \n", suma);

    system("pause");
}