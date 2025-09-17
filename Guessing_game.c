//Number Guessing Game
#include <stdio.h>

int main() {
    int n, correct_number = 3, count = 0;

    printf("Guess the number between 1 to 10 (No decimal number)\n");

    
    do {
        printf("Enter your guess: ");
        scanf("%d", &n);
        count++;

        if (n < 0) {
            printf("Enter a valid number!\n");
        }
        else if (n > correct_number) {
            printf("Too High! Try again.\n");
        }
        else if (n < correct_number) {
            printf("Too Low! Try again.\n");
        }
        else {
            printf("🎉 Correct! You guessed it in %d attempts.\n", count);
        }

    } while (n != correct_number);

    return 0;
}
