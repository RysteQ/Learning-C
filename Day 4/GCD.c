#include <stdio.h>

#define TRUE 1

int GCD(int numberOne, int numberTwo);
int GetInt(void);

int main() {
    printf("Enter number one -> ");
    int numberOne = GetInt();

    printf("Enter number two -> ");
    int numberTwo = GetInt();

    printf("The greatest common dividor is %i\n", GCD(numberOne, numberTwo));

    return 0;
}

int GCD(int numberOne, int numberTwo) {
    int remainder;

    while (TRUE) {
        remainder = numberOne % numberTwo;

        if (remainder == 0)
            break;

            numberOne = numberTwo;
            numberTwo = remainder;
    }

    return numberTwo;
}

int GetInt(void) {
    int toReturn;

    scanf("%i", &toReturn);

    return toReturn;
}