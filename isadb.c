#include <stdio.h>
#include <string.h>
//libreria que permite acceder a datos horarios
//#include <time.h>

//Uso parámetros en la función
int main(int argc,char *argv[]){
    //printf("Hola");
    //Escribir en un archivo de texto
    FILE *archivo;
    char *operacion = argv[1];
    char *basededatos = argv[2];
    char *coleccion = argv[3];
    char *documento = argv[4];
    char ruta[100];
    //Para concatenar los elementos
    strcpy(ruta,basededatos);
    strcat(ruta,"/");
    strcat(ruta,coleccion);
    strcat(ruta,"/");
    strcat(ruta,documento);
    strcat(ruta,".json");
    
    printf("La ruta es: %s",ruta);
    
    //Como argumentos que tengo que pasar, tengo la operacion, la bbdd, el nombre de la coleccion, el nombre del documento y el contenido del documento
    
    if(strcmp(operacion,"select") == 0){
        //Abro el archivo en el modo read
        archivo = fopen(ruta,"r");
        printf("te doy datos:\n");
        char linea[1024];
        
        while(fgets(linea,sizeof(linea),archivo) != NULL){
            printf("Linea: %s",linea);
        }
        
    }else if(strcmp(operacion,"insert") == 0){
        //Abro el archivo en el modo write
        archivo = fopen(ruta,"w");
        char *texto = argv[4];
        fputs(strcat(texto,"\n"),archivo);
        fclose(archivo);
    }else{
        printf("operación no válida");
    }
    
    return 0;
}