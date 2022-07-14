#include <stdio.h>

int GetInt();

int main() {
    printf("Enter positive number -> ");
    int number = GetInt();
    int digits = 0;

    while (number > 0) {
        number /= 10;
        digits++;
    }

    printf("The number of digits is %i\n", digits);

    return 0;
}

int GetInt() {
    int toReturn;

    scanf("%i", &toReturn);

    return toReturn;
}