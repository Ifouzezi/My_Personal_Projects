#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess;

    // Use the current time as seed for random generator
    srand(time(0));

    // Generate a random number between 1 and 10
    randomNumber = rand() % 10 + 1;

    // Ask the user to guess the number
    printf("Guess any number between 1 and 10: ");
    scanf("%d", &guess);

    while ( guess != randomNumber) {
        if (guess > randomNumber) {
            printf("Too high! Guess again: ");
            scanf("%d", &guess);
        } else {
            printf("Too low! Guess again: ");
            scanf("%d", &guess);
        }
    }
    // Congratulate the user for the correct guess
    printf("Congratulations! You are correct! %d.\n", randomNumber);

    return 0;
}
