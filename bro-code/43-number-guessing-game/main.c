#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    // Uses the current time as a seed
    srand(time(0));

    // Generate aa random number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a number between %d and %d: ", MIN, MAX);
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;

    } while (guess != answer);

    printf("**********************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("**********************\n");

    return 0;
}