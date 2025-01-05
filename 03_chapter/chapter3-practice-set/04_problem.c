#include <stdio.h>

int main(){
     int year;

     printf("Enter the year:\t");
     scanf("%d", &year);

     printf("The year is %d\n", year);

     if (year % 400 == 0){
            printf("The year is a leap year\n");
     } 
        else if (year % 100 == 0){
            printf("The year is not a leap year\n");
        }
        else if (year % 4 == 0){
            printf("The year is a leap year\n");
        }
        else{
            printf("The year is not leap year\n");
        }
    return 0;
}