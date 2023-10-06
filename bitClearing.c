#include <stdio.h>

//variables to store input and output values
int number = 0, newNumber = 0, bitposition = 0;


//function that prints the binary representation of an integer
void bin(unsigned n)
{   
    //creates unsigned integer variable i (32 bits)
    unsigned i;
    
    //(i = 1 << 31) sets the most significant (leftmost) bit of i to 1, by left shifting 1 by 31 positions
    //(i > 0) loop will run as long as i is greater than 0
    //(i = i/2) right shifts the value of i in each iteration
    //Example of right shifting by dividing by 2: (10000 (16) > 01000 (8) > 00100 (4) > 00010 (2) > 00001 (1))
    for (i = 1 << 31; i > 0; i = i / 2)
        //checks if the bit in the current position is 1 by comparing the input integer n to i with an & operator
        //if the bit value is 1 it prints 1 otherwise it prints 0
        (n & i) ? printf("1") : printf("0");
}


int main(){
    
    //Input number to manipulate
    printf("Enter the number:");
    //Set input to address of number variable
    scanf("%d", &number);

    //Input position of bit to clear
    printf("Enter position of bit to clear:");
    //Set input to address of position variable
    scanf("%d", &bitposition);

    //Perform bit clearing using binary and operator & between the number and the flipped binary value of number with 1 left shifted by the value of bitposition 
    newNumber = number & (~(1<<bitposition));

    //Print the result
    printf("Result = %d", newNumber);
    printf(" \n");

    //Print binary representation of the original number and the resulting number
    printf("Binary: ");
    bin(number);
    printf(" > ");
    bin(newNumber);
}
