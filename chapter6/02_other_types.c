#include <stdio.h>


int main(){
         
  char i =  'A';
  char *j = &i; // j is a pointer to i (j is an charactor pointer)
  
  float k = 23.5;
  float *l = &k; // l is a pointer to k (l is an float pointer)
  printf("The address of i is %p\n", &i); // %p is used to print the address of a variable
  printf("The address of i is %p\n", &j); // %p is used to print the address of a variable
  printf("The address of k is %p\n", &k); // %p is used to print the address of a variable
  printf("The value of j is %d\n" , i); // %d is used to print the value of a variable
    
    return 0;
}