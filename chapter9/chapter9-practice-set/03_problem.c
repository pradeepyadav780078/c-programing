#include <stdio.h>

typedef struct emp{
  int salary;
  float score;

}Employee;
int main(){
  Employee e1;
  Employee* ptr1 = &e1;
  (*ptr1).salary = 100;
  ptr1->salary = 56;

  printf("The salary of employee is %d\n", ptr1->salary);
    return 0;
} 