#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int magic;
    int guess;
    magic = rand();
    printf("Guess the magic number: ");
    scanf("%d", &guess);
    if (guess == magic)
    {
        printf("** Right **");
        printf(" %d is the magic number\n", magic);
    }
    else
    {
        printf("Wrong, ");
        if (guess > magic)
            printf(" high\n");
        else
            printf(" low\n");
    }
}