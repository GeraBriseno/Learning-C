//Se incluyen las librerias standar input/output y string
#include <stdio.h>
#include <string.h>

//Variables char array para guardar los inputs
char nombre[40];
char adeudo[10];

//Pointer tipo file para el archivo de texto
FILE *fp;

//Funcion para esbribir a archivo .txt
void agregarCliente(){

    //Abrir el archivo
    fp = fopen("C:\\Users\\angel\\OneDrive\\Documentos\\Proyectos C\\clientes.txt", "a+");

    //Mostrar mensaje en la consola
    printf("Ingrese nombre del cliente: ");
    //Escribir el input obtenido en al array nombre
    fgets(nombre, sizeof(nombre), stdin);
    //Cambiar el caracter de nueva línea por el de final de línea
    nombre[strcspn(nombre, "\n")] = '\0';

    //Mostrar mensaje en la consola
    printf("Ingrese adeudo: ");
    //Escribir el input obtenido en al array adeudo
    fgets(adeudo, sizeof(adeudo), stdin);
    //Cambiar el caracter de nueva línea por el de final de línea
    adeudo[strcspn(adeudo, "\n")] = '\0';

    //Escribir el contenido de nombre y adeudo al archivo de texto
    fprintf(fp, "%s, %s\n", nombre, adeudo);

    //Cerrar el archivo
    fclose(fp);

}

//Funcion principal
int main(){

    //Correr continuamente la funcion agregarCliente()
    while(1){
        agregarCliente();
    }

}