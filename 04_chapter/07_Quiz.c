#include <stdio.h>

int main(){
     
    int n;
    int i = 1;
    printf("Enter the number you want to print the table of:");
    scanf("%d", &n);
    printf("you Enter number is %d\n", n);
    do{
        printf("The netural number is %d\n", i);
        i++;
    }while(i<=n);
    return 0;
}