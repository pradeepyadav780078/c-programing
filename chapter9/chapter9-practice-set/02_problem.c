#include <stdio.h>
struct vector{
    int i;
    int j;
};

struct vector sumvector(struct vector v1, struct vector v2){
    struct vector v3 = {(v1.i +v2.i) + (v1.j + v2.j)};
    return v3;
}
int main(){
struct vector v1 = {1, 2};
struct vector v2 = {2, 4};
struct vector v3 = sumvector(v1, v2);
printf("The value of vector v3 is %di + %dj", v3.i, v3.j); 
    return 0; 
}