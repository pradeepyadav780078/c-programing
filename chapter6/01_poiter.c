#include <stdio.h>


int main(){
         
  int i = 72;
  int *j = &i; // j is a pointer to i (j is an integer pointer)
  int k = 10;
  printf("The address of i is %p\n", &i); // %p is used to print the address of a variable
  printf("The address of i is %p\n", &j); // %p is used to print the address of a variable
  printf("The address of i is %p\n", &k); // %p is used to print the address of a variable


printf("The value of j is %d\n" , i); // %d is used to print the value of a variable
   
    return 0;
}