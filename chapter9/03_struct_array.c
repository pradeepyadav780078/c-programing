#include <stdio.h>

struct employee
{
   int code;
   float salary;
   char name[10];
};
int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 101;
    struct employee pradeep = {100, 1000, "pradeep"};
    printf("%d %f %s\n", pradeep.code, pradeep.salary, pradeep.name);
    return 0;
}