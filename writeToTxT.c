#include <stdio.h>
#include <stdio.h>

char nombre[40];
char adeudo[10];

FILE *fp;  //pointer de tipo file

int agregarCliente(){

    fp = fopen("C:\\Users\\angel\\OneDrive\\Documentos\\Proyectos C\\clientes.txt", "a+");

    printf("Ingrese nombre del cliente:");
    scanf("%40[^ ]", &nombre);
    fputs(nombre, fp);
    fputs(", ", fp);
    
    printf("Ingrese adeudo: ");
    scanf("%s", &adeudo);
    fputs(adeudo, fp);
    //fputs("\n", fp);
    //scanf("%39[0-9a-zA-Z ]", &nombre);
    fputs("\n", fp);

    fclose(fp);

}

int main(){

    while(1){
        agregarCliente();
    }

}