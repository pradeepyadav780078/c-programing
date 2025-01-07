#include <stdio.h>

int sum_natural(int n){
    return (n*(n+1))/2;
}


int main(){
  int n = 5;
  printf("The sum of first %d natural numbers is %d\n", n, sum_natural(n));
   return 0;
}