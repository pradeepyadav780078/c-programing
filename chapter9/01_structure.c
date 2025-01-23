#include <stdio.h>
#include <string.h>

struct employee
{
   int code;
   float salary;
   char name[10];
};

int main(){
 struct employee e1, e2;
 e1.code = 100;
 strcpy(e1.name, "pradeep");
 e1.salary = 10000;
 printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    return 0;
}