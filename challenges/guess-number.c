#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Number beetwen 0 - 20 is randomized
// User has 5 tries to guess the number
// Feedback says if number is higher or lower

int main(int argc, char const *argv[])
{
    time_t tm;
    int number, guess, tries;

    srand((unsigned) time(&tm));
    number = rand() % 21;

    printf("Try to guess my number from 0 to 20 ");

    for (tries=5; tries>0; --tries) {
        printf("You have %d tr%s left. \n", tries, tries == 1 ? "y" : "ies");
        printf("Take a guess: "); scanf("%d", &guess);
        if (guess == number) {
            printf("That's correct! My number is %d. \n", number);
            break;
        }
        else if (guess < 0 || guess > 20)
            printf("Number has to be lower than 20 higher than 0. \n");
        else if (guess > number)
            printf("My number is lower. \n");
        else if (guess < number)
            printf("My number is higher. \n");
    }

    if (tries == 0)
        printf("No more tries left, My number was %d \n", number);

    return 0;
}
