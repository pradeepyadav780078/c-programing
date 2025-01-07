#include <stdio.h>
 
 float average(int a, int b, int c);


 float average(int a, int b, int c){
    return a+b+c/3.0;
 }


int main (){
     int a = 2;
     int b = 3;
     int c = 4;
     printf("The average of %f\n", average(a,b,c));

    return 0;
    
    }