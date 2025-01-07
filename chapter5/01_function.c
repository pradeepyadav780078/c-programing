#include <stdio.h>

 //Function prototype
// int sum(int, int);

//Function definition
int sum(int x, int y){
 printf("The sum is %d\n", x+y);
 return x+y;
}
int main(){
     int a = 1;
     int b = 2;
      int c = sum(a, b);
      printf("The sum is %d\n" , c);
     

     int a1 = 11;
     int b1 = 21;
     int c1 = sum(a1, b1);
     printf("The sum is %d\n" , c1);

     int a2 = 15;
     int b2 = 25;
      int c2 = sum(a2, b2);
      printf("The sum is %d\n", c2);

      int a3 = 13;
     int b3 = 23;
     int c3 = sum(a3, b3);
     printf("The sum is %d\n", c3);

    return 0;
}