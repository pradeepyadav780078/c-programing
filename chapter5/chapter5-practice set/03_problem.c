#include <stdio.h>

float force(float mass){
    return mass * 9.8;
}


int main(){
   int mass = 45;
   printf("The force is %f", force(mass));
    return 0;
}