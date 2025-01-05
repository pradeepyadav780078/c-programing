 #include <stdio.h>

int main(){
     int n;
     printf("Enter a number : ");
     scanf("%d" , &n);
    int prime = 0;

    if(n == 0 || n ==1){
        prime = 1;
    }
    else{

    int i = 2;

      while(  i <= n){
       if(n % i == 0  ){
            prime = 1;
            break;
       }
       i++;
     }
    }
        if(prime){
            printf("%d is not prime \n" , n);
        }
        else{  
            printf("%d is prime \n" ,n);
        }

    return 0;
}