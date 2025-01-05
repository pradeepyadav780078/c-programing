#include <stdio.h>

int main(){
     
     int income;
     float tax;
     
     printf("Enter the income\n");
     scanf("%d", &income);
     printf("you income is %d \n", income);

     if ( income < 250000){
            tax = 0;
     }
     else if(income > 250000 && income < 5000000 ){
            tax = 0.05 * (income - 250000);
    }
    else if (income >5000000 && income < 10000000){
           tax = 0.05 * (5000000 - 250000) + 0.2 * (income - 5000000);
    }
    else {
           tax = 0.05 * (5000000 - 250000) + 0.2 * (10000000 - 5000000) + 0.3 * (income - 10000000);
    }
    printf("The total tax you need to pay is %0.2f\n", tax);

    return 0;
}