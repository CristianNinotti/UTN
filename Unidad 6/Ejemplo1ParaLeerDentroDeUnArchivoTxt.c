#include <stdio.h>
#include <stdlib.h>

//El siguiente código abre un archivo llamado "ejemplo1.txt" en modo lectura y 
//lee dentro de él 

void main () 
{ 
    FILE *fp;     // Puntero Se define asi para abrir un archivo .txt
    
    char texto[100];

    //abrimos el archivo, en modo lectura 
    fp = fopen("ejemplo_1.txt", "r");       //fp se le define, ruta //("archivos/ejemplo_1.txt", "r");
    
     //leemos el texto hasta un espacio y 
    //lo almacenamos en el array texto  
    fscanf(fp, "%s", texto);
    

    printf("La primer palabra del archivo es: \n"); 
    
    //imprimimos en consola lo almacenado en el array texto 
    printf("%s \n",texto);
    

    fclose (fp); 
    
    //cerramos el archivo 
    system("pause");
}