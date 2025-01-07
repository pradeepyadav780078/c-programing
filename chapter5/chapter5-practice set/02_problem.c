#include <stdio.h>
 
 
 
float convertCelsiusToFahrenheit(int celsius){
    return (celsius * 9/5)+32;
}

int main(){
    
    //F=(C× 5/9)+32
    int celsius = 45;

    printf("The temperature in Fahrenheit is %f\n", convertCelsiusToFahrenheit(celsius));
   return 0;
}

