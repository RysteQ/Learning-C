#include <stdio.h>

int getInt();

int main() {
    int total = 0;
    int numberToAdd;

    while (1) {
        printf("Number -> ");
        numberToAdd = getInt();

        if (numberToAdd == 0)
            break;
        
        total += numberToAdd;
    }

    printf("The total is %i\n", total);
}

int getInt() {
    int toReturn;

    scanf("%i", &toReturn);

    return toReturn;
}