#include <stdio.h>

int main(){
    int celcius;
    printf("Enter the temperature in Celsius");
    scanf("%d", &celcius);
    printf("The temperature in Fahrenheit is %f", (9.0/5.0)*celcius +32);
    return 0;
}