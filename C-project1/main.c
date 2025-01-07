#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Initialize the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
     int guessed_number;
    //print the ramdom number
    // printf("Random number: %d\n", randomNumber);

   do{
    printf("Guess the number:");
    scanf("%d" , &guessed_number);
    if(guessed_number > randomNumber){
        printf("Lower number please!\n");
    }
    else if(randomNumber > guessed_number){
        printf("Higher number please!\n");
    }
    else{
        printf("You guessed_number it right Congrats!!\n");
    }
    no_of_guesses++;
   }
   while(guessed_number!= randomNumber);
   printf("You guess the number in %d guessed_number", no_of_guesses);
    return 0;
 
}