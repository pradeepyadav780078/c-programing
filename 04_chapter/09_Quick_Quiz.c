#include <stdio.h>

int main(){
    int n;
    int i = 1;
    printf("Enter the number you want to print the table of:");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("The netural number is %d\n", i);
    }
}