#include <stdio.h>
#include <string.h>

//Uso parámetros en la función
int main(int argc,char *argv[]){
    //Escribir en un archivo de texto
    FILE *archivo;
    char *operacion = argv[1];
    char *basededatos = argv[2];
    char *nombrearchivo = argv[3];
    char ruta[100];
    strcpy(ruta,basededatos);
    strcat(ruta,"-");
    strcat(ruta,nombrearchivo);
    strcat(ruta,".txt");
    
    if(strcmp(operacion,"select") == 0){
        //Abro el archivo en el modo read
        archivo = fopen(ruta,"r");
        printf("te doy datos:\n");
        char linea[1024];
        
        while(fgets(linea,sizeof(linea),archivo) != NULL){
            printf("Linea: %s",linea);
        }
        
    }else if(strcmp(operacion,"insert") == 0){
        //Abro el archivo en el modo añadir
        archivo = fopen(ruta,"a");
        char *texto = argv[4];
        fputs(strcat(texto,"\n"),archivo);
        fclose(archivo);
    }else{
        printf("operación no válida");
    }
    
    return 0;
}