#include <stdio.h>

int main()
{
    float a = 9.0;
    int b = 2;
    float c = a / b;
    int d = 6.7;
    float  k = 3.0/9;
    printf("The value of k is %f\n ", k);
    printf("The value of a/b is %f \n", c);
    printf("The value of d is %d \n", d); //d will be 6 as it is an integer and 6.7 will be converted to 6 
    return 0;
}