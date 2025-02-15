#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int playter, computer = rand() % 3;
    //    0 --> snake
    //    1 --> water
    //    2 --> gun
    printf("Enter 0 for snake, 1 for water and 2 for gun\n");
    scanf("%d", &playter);
    printf("Computer choose %d\n", computer);
    if (playter == 0 && computer == 0)
    {
        printf("Its a draw\n");
    }
    else if (playter == 0 && computer == 1)
    {
        printf("you win\n");
    }
    else if (playter == 1 && computer == 0)
    {
        printf("you lose\n");

    }
    else if (playter == 1 && computer == 1)
    {
        printf("Its a draw\n");
    }
    else if (playter == 1 && computer == 2)
    {
        printf("you win\n");
    }
    else if (playter == 1 && computer == 0)
    {
        printf("you lose\n");
    }
    else if (playter == 2 && computer == 0)
    {
        printf("you win\n");
    }
    else if (playter == 1 && computer == 2)
    {
        printf("you win\n");
    }
    else if (playter == 2 && computer == 2)
    {
        printf("Its a draw\n");
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}