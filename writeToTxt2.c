#include <stdlib.h>
#include <stdio.h>

int main(){

    #define MAX_NOMBRE_TAM 256
    char *linea = malloc(MAX_NOMBRE_TAM);

    FILE *fp;  //pointer de tipo file

    while(1){

        printf("Ingrese nombre del cliente y el adeudo separados por una coma: ");
        fgets(linea, MAX_NOMBRE_TAM, stdin);
        fp = fopen("C:\\Users\\angel\\OneDrive\\Documentos\\Proyectos C\\clientes.txt", "a+");
        fputs(linea, fp);
        fclose(fp);
        
    }
}