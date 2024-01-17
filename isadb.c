#include <stdio.h>
#include <string.h>

//Uso parámetros en la función
int main(int argc,char *argv[]){
    //Escribir en un archivo de texto
    FILE *archivo;
    char *basededatos = argv[1];
    char *nombrearchivo = argv[2];
    
    char ruta[100];
    strcpy(ruta,basededatos);
    strcat(ruta,"-");
    strcat(ruta,nombrearchivo);
    strcat(ruta,".txt");
    printf(ruta);
    
    //Guardo el nombre de archivo terminado en .txt
    archivo = fopen(ruta,"a");
    
    char *texto = argv[3];
    fputs(strcat(texto,"\n"),archivo);
    fclose(archivo);
    //En el argumento1 se guarda el nombre de la bbdd, el argumento2 el nombre de la tabla, y el argumento3 el dato a guardar
    return 0;
}