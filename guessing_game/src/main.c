#include<stdio.h>
#include<stdlib.h>

int main(){
    int secretNumber = 5;
    int userGuess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while (userGuess != secretNumber && outOfGuesses == 0){
        if (guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &userGuess);
            guessCount++;

        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1){
        printf("Out of Guesses\n");
    } else {
        printf("You win\n");
    }
    
}