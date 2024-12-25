#include <stdio.h>

int main(){
    int redius, height;
    printf("Enter the redius \n");
    scanf("%d", &redius);
    printf("Enter the Height\n");
    scanf("%d", &height);
    printf("The volume of cylinder with radius is %f", 3.14*redius*redius*height);
    return 0; 

}