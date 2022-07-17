#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetInt(void);

int main() {
    printf("Enter how many random numbers you want to generate -> ");
    int amount = GetInt();

    if (amount < 1)
        return -1;

    srand(time(NULL));

    for (int i = 0; i < amount; i++)
        printf("Random number %i has a value of %i\n", i + 1, rand());

    return 0;
}

int GetInt(void) {
    int toReturn;

    scanf("%i", &toReturn);

    return toReturn;
}