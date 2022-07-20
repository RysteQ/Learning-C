#include <stdio.h>

int main() {
    int arrayOfNumbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = &arrayOfNumbers;

    // the same logic applies for the decrement operation
    printf("The value of arrayOfNumbers[0] is %i\n", *(p++));
    printf("The value of arrayOfNumbers[1] is %i\n", *p);
    printf("The value of arrayOfNumbers[2] is %i\n", *(++p));
    printf("The value of arrayOfNumbers[2] is %i\n", *p);

    return 0;
}