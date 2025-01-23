#include <stdio.h>

int strlen(char str[]){
    int i = 0 ,count;
    char c = str[i];
    while (c != '\0'){
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}
 void mystrcpy(char target[] ,char source[]){
    for (int i = 0; i < strlen(source); i++){
       target[i] = source[i];
    }
    target[strlen(source)] = '\0';
 }

int main(){
   
 char source[] = "Hello World";
 char target[20];
 mystrcpy(target,source);
 printf("%s %s", source, target);
    return 0;
}