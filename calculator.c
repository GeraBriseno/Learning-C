#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   int a, b, c, indice, operation;
   int * pA = &a;
   int * pB = &b;
   int * pC = &c;
   //pA = &a    //*pA = a
   float result;
   char operaciones[4][15] = {"suma", "resta", "multiplicacion", "division"};

   c = 18;

   printf("Enter First Number: ");
   scanf("%d", &a);

   printf("Enter Second Number: ");
   
   scanf("%d", &b);


   
   printf("Enter Operation (1:addition 2:substraction 3:multiplication 4:division): ");
   scanf("%d", &operation);

   if(operation==1){
      result = *pA + *pB;
      indice = 0;
   }
   else if(operation==2){
      result = *pA - *pB;
      indice = 1;
   }
   else if(operation==3){
      result = *pA * *pB;
      indice = 2;
   }
   else if(operation==4){
      result = *pA / *pB;
      indice = 3;
   }
   else{
      printf("Operacion invalida");
      exit(0);
   }

   printf("La %s de los numeros %d y %d es igual a: %.2f", operaciones[indice], *pA, *pB, result);

   printf("\n");

   printf("%d", pA);

}