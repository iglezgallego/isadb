#include <stdio.h>
#include <string.h>

int main(){
    //Escribir en un archivo de texto
    FILE *archivo;
    archivo = fopen("basededatos.txt","w");
    char *texto = "ISADB";
    fputs(texto,archivo);
    fclose(archivo);
    return 0;
}