#include <stdio.h>

int main(){
      
     int age = 40;

     if (age>=60){
        printf("you can drive car and you are a senior ctitizen");
     }
     else if(age>=40){
        printf("You can drive car and you are elder person");
     }
     else if(age>=18){
        printf("you can drive car");
     }
      else if(age<=8){
        printf("you are children and you can not drive car");
     }
     else{
        printf("you can not drive car");
     }

    return 0;
}