#include <stdio.h>

int main(){
    int arr[2][3][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 3; i++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%u\n", &arr[i][j][k]);
            } 
        } 
    } 
    return 0;
}