#include <stdio.h>

int main(){
    int P, R, T;
    printf("Enter the principle amount (P)");
    scanf("%d", &P);
    printf("Enter the rate of interest (R)");
    scanf("%d", &R);
    printf("Enter the time period (T)");
    scanf("%d", &T);
    printf("The simple interest is %f", (P*R*T)/100.0);
}
