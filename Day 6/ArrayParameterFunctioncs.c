#include <stdio.h>

#define NUMBER_OF_ELEMENTS 10

void Fibonacci(int array[], int limit);
void PrintIntegerArray(int array[], int size);

int main() {
    int fibonacciArray[NUMBER_OF_ELEMENTS];

    Fibonacci(fibonacciArray, NUMBER_OF_ELEMENTS);
    PrintIntegerArray(fibonacciArray, NUMBER_OF_ELEMENTS);

    return 0;
}

void Fibonacci(int array[], int limit) {
    array[0] = 0;
    array[1] = 1;

    for (int i = 2; i < limit; i++) 
        array[i] = array[i - 1] + array[i - 2];
}

void PrintIntegerArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("Number at index %i = %i\n", i, array[i])
}