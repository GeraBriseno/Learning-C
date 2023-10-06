#include <stdio.h>

//Function to calculate powers
// Returns int, takes two int arguments, the number to be raised (base) and the power it will be raised to (n)
int power(int base, int n){

    int i, p;

    p = 1;

    //This for loop will run n times, and in each iteration it will multiply base by its previous accumulated value
    for(i = 1; i <= n; ++i){
        p = p*base;
    }

    return p;    

}

int main(){
    //Run power() using the same power function as arguments
    //Easy to overflow, use long long for large numbers ("%lld")
    printf("\n %d raised to the power of %d = %d", power(3, 2), power(2, 2), power(power(3, 2), power(2, 2)));
}

