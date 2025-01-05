#include <stdio.h>
    
int main(){
        
     int n;
     printf("Enter the number of elements:\t");
     scanf("%d", &n);
     for(int i = 1; i <= 10; i++){
           printf("multiple of is : %d\n", i*n);
     }      
     return 0;   
}