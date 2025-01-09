#include <stdio.h>

void swap(int* a, int* b){
    int tem;
    tem = *a;
    *a = *b;
   * b = tem;
}


int main(){
        int a = 4, b = 6;
        swap(&a, &b);
        printf("The value of a is %d and b is %d", a, b);
    return 0;
} 