#include <stdio.h>

int GetInt();
int Factorial(int limit);

int main() {
    printf("Number to calculate -> ");
    int limit = GetInt();
    int number = Factorial(limit);

    printf("%i! = %i\n", limit, number);

    return 0;
}

int GetInt() {
    int toReturn;

    scanf("%i", &toReturn);

    return toReturn;
}

int Factorial(int limit) {
    if (limit == 0)
        return 1;

    return limit * Factorial(limit - 1);
}