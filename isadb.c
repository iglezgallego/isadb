#include <stdio.h>
#include <string.h>

//Uso parámetros en la función
int main(int argc,char *argv[]){
    //Escribir en un archivo de texto
    FILE *archivo;
    char *nombrearchivo = argv[1];
    //Guardo el nombre de archivo terminado en .txt
    archivo = fopen(strcat(nombrearchivo,".txt"),"a");
    //escribo en consola con "","" lo que quiero que se escriba en el archivo, guarda dos parametros
    //el primer parametro equivale a la tabla y el segundo al dato que quiero guardar
    char *texto = argv[2];
    fputs(strcat(texto,"\n"),archivo);
    fclose(archivo);
    return 0;
}