#include <stdio.h>

int main()
{
  int i = 1;
  int product = 1;
  int n;
  printf("enter the number :\t");
  scanf("%d", &n);
  while (i <= n)
  {
    product *= i; // product = product * i
    i++;
  }
  printf("the factorial of %d is : %d", n, product);
  return 0;
}