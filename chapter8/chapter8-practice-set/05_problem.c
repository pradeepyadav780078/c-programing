#include <stdio.h>
#include <string.h>
int main(){
  char str[] = " my ATM password is this 456758";
  for (int i = 0; i < strlen(str); i++){
    str[i] = str[i] + 1;
  }
  printf("%s", str); 
   return 0;
}