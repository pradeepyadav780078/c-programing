#include <stdio.h>

int main (){
    int marks = 60;

     if(marks>90){
        printf("your geade is A");
    }
    else if(marks>80){
        printf("your gread is B");
    }
    else if(marks>70){
        printf("your gread is C");
    }
    else if(marks>60){
        printf("your gread is D");
    }
    else if(marks>50){
        printf("your gread is E");
    }
    else{
        printf("your gread is F");
    }
    return 0;
}