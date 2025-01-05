#include <stdio.h>

int main (){
    for (int i = 0; i < 15; i++){
        if (i==5){
           // break; //  exit the loop now!
            continue; // skip the current iteration
        }
        printf("The value of i is %d \n", i);

            }
}