// https://www.includehelp.com/ascii-table.aspx
#include <stdio.h>

int main (){
    
     char ch = '5';
     printf("The character value is %c\n", ch);
     printf("The character value is %d\n", ch);
     if (ch >= 65 && ch <= 90){
            printf("The character is an uppercase alphabet\n");
     }
        else if (ch >= 97 && ch <= 122){
            printf("The character is a Lowercase alphabet\n");
        }
        else{
            printf("The character is not an alphabet\n");
        }
    return 0;
}