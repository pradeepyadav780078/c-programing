#include <stdio.h>

int main (){

    int product = 1;
    for( int i = 1; i <= 5; i++){
        product *= (i); // product = product * i
    }
    printf("Sum of fectorial of 5 is : %d", product);
    
    return 0;
}