#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 0 and 100
    int num = rand() % 101;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random                            number between 0 and 100: %d\n", num);
    

    do{
       printf("Guess the Random number:");
       scanf("%d", &guessed);
       if(guessed > num){
           printf("Lower number please\n");
       } else if(guessed < num){
           printf("Higher number please\n");
       }
         no_of_guesses++;

    }while(guessed != num);

    printf("Congratulations! You've guessed the number %d in %d attempts.\n", num, no_of_guesses);

    return 0;
}
