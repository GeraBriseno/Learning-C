#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int varIntVol = 0;

void func(){
    varIntVol++;
}
void func2(){
    varIntVol=varIntVol * 2;
}

int main()
{   
    int * ptr = &varIntVol;
    while(1)
    {
        func();
        printf("Variable F1: %i", *ptr);
        printf("\n\n");
        func2();
        printf("Variable F2: %i", *ptr);
        printf("\n\n");
    }
}