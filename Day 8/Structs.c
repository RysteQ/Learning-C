#include <stdio.h>

typedef struct {
    int numOne;
    int numTwo;
    int sum;
} NumbersT;

int main() {
    NumbersT newNumbersT = { 10, 30, 0 };
    newNumbersT.sum = newNumbersT.numOne + newNumbersT.numTwo;

    printf("%i + %i = %i\n", newNumbersT.numOne, newNumbersT.numTwo, newNumbersT.sum);

    return 0;
}