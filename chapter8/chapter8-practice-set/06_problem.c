#include <stdio.h>
#include <string.h>
int main(){
  char str[] = "!nz!BUN!qbttxpse!jt!uijt!567869";
  for (int i = 0; i < strlen(str); i++){
    str[i] = str[i] - 1;
  }
  printf("%s", str); 
   return 0;
}