#include <stdio.h>
#include <string.h>

//Uso parámetros en la función
int main(int argc,char *argv[]){
    //Escribir en un archivo de texto
    FILE *archivo;
    archivo = fopen("basededatos.txt","a");
    //Quiero atrapar el primer elemento que hay en el argumento 
    //escribo en consola con "" lo que quiero que se escriba en el archivo, que es el parámetro que guarda
    char *texto = argv[1];
    fputs(strcat(texto,"\n"),archivo);
    fclose(archivo);
    return 0;
}