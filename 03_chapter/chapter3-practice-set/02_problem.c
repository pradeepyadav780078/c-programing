#include <stdio.h>

int main()
{

    int subject1;
    int subject2;
    int subject3;
    printf("Enter the marks of 1 subject:\n");
    scanf("%d", &subject1);
    printf("Enter the marks of 1 subject:\n");
    scanf("%d", &subject2);
    printf("Enter the marks of 1 subject:\n");
    scanf("%d", &subject3);
    printf("The marks are %d, %d and %d\n", subject1, subject2, subject3);

    if (subject1<33 ||subject2<33 || subject3 <33)
    {
        printf("you are failed due to less marks in individual subject(s)\n");
    }
    else if ((subject1 + subject2 + subject3)/3 < 40)
    {
        printf("you are failed due to less percentage\n");
    }
    else
    {
        printf("You are passed\n");
    }

    return 0;
}