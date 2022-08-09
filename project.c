#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;

    srand(time(0));
    number = rand() % 100 + 1;
     // printf(" the number is %d\n", number);

    do
    {

        printf(" enter the number between 1 to 100\n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("lower number needed !\n");
        }
        else if (guess < number)
        {

            printf("higher number needed !\n");
        }

        else
        {
            printf("you guessed in %d\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}