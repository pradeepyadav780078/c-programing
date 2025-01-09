#include <stdio.h>

int sum(int a , int b){
     printf("The sum is %d\n", a+b);
 
} 
int  average(int a , int b){
    printf("The average is %f\n", a+b/2.0);
}
int main(){
  int a = 4;
  int b = 6;
  printf("The sum is %d\n", a+b);
  printf("The average is %f\n", a+b/2.0);
    return 0;
}