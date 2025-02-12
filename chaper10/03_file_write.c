#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("pradeep.txt", "w");
    int num = 432;
    fprintf(fptr, "The value of num is: %d\n", num);
    fclose(fptr); 
    return 0;
}