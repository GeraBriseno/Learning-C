#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   //Variables tipo entero para guardar los inputs
   int a, b, indice, operation;

   //Pointers a las variables de los valores para la opercacion
   int * pA = &a;
   int * pB = &b;

   //Pointers y direcciones
   //pA = &a    //*pA = a

   //Variable float para guardar el resultado de la operacion
   float result;

   //Array de char arrays para las operaciones
   char operaciones[4][15] = {"suma", "resta", "multiplicacion", "division"};

   //Se muestra el mensaje para ingresar el primer numero
   printf("Enter First Number: ");
   //Se guarda el valor ingresado en la direccion de la variable a como entero
   scanf("%d", &a);

   //Se muestra el mensaje para ingresar el segundo numero
   printf("Enter Second Number: ");
   //Se guarda el valor ingresado en la direccion de la variable b como entero
   scanf("%d", &b);


   //Se muestra el mensaje para ingresar la operacion a realizar
   printf("Enter Operation (1:addition 2:substraction 3:multiplication 4:division): ");
   //Se guarda el valor ingresado en la direccion de la variable operacion como entero
   scanf("%d", &operation);

   //Se corre una condicional al valor de la variable operacion, para realizar la operacion seleccionada
   //Suma
   if(operation==1){
      //Se utilizan los pointers en lugar de las variables
      result = *pA + *pB;
      //Se asigna un valor a la variable indice dependiendo de la operacion
      indice = 0;
   }
   //Resta
   else if(operation==2){
      result = *pA - *pB;
      indice = 1;
   }
   //Multiplicacion
   else if(operation==3){
      result = *pA * *pB;
      indice = 2;
   }
   //Division
   else if(operation==4){
      result = *pA / *pB;
      indice = 3;
   }
   //Se muestra este mensaje si se ingreso una operacion no valida
   else{
      printf("Operacion invalida");
      //Se termina el script
      exit(0);
   }

   //Se muestra un mensaje con el resultado y la operacion realizada 
   printf("La %s de los numeros %d y %d es igual a: %.2f", operaciones[indice], *pA, *pB, result);

}