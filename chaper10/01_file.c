#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("pradeep.txt", "w");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is: %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is: %d\n", num);
    fclose(ptr);
    return 0;
}