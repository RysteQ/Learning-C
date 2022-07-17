#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main() {
    int randomNumbersList[ARRAY_SIZE];

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        randomNumbersList[i] = rand();
        printf("randomNumbersList[%i] = %i\n", i, randomNumbersList[i]);
    }
    
    return 0;
}