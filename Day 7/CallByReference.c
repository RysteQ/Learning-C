#include <stdio.h>

void PowerOfTwo(int *numberToRaise);

int main() {
    int number = 5;

    PowerOfTwo(&number);

    printf("The value of the number is %i\n", number);

    return 0;
}

void PowerOfTwo(int *numberToRaise) {
    *numberToRaise = *numberToRaise * *numberToRaise;
}