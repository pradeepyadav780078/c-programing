#include <stdio.h>

 int main (){
    int i = 1;
     int sum = 0;
    for(i = 1; i <= 10; i++){
      sum  += (8*i); // sum = sum + (8*i)
    }
    printf("Sum of first 10 multiple of 8 is : %d", sum);
    return 0;
 }