#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 65536

int count_lines(FILE* file)
{
    char buf[BUF_SIZE];
    int counter = 0;
    for(;;)
    {
        size_t res = fread(buf, 1, BUF_SIZE, file);
        if (ferror(file))
            return -1;

        int i;
        for(i = 0; i < res; i++)
            if (buf[i] == '\n')
                counter++;

        if (feof(file))
            break;
    }
    return counter;
}


int main(){

    #define MAX_LINEA_TAM 256
    
    char *linea = malloc(MAX_LINEA_TAM);
    int lineas;

    FILE *fp;

    fp = fopen("C:\\Users\\angel\\OneDrive\\Documentos\\Proyectos C\\clientes.txt", "r");

    lineas = count_lines(fp);

    fclose(fp);

    fp = fopen("C:\\Users\\angel\\OneDrive\\Documentos\\Proyectos C\\clientes.txt", "r");
    
    for (int i = 0; i < lineas; i++){
        
        fgets(linea, MAX_LINEA_TAM, fp);
        printf(linea);
    
    }
    fclose(fp);
}