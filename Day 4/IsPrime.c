#include <stdio.h>
#include <math.h>

// don't ask why I do this
#define TRUE 1
#define FALSE 0

int SlowIsPrime(int number);
int BetterIsPrime(int number);
int ChadIsPrime(int number);

int main() {
    for (int i = 0; i < 100; i++) {
        printf("The number %i is ", i);

        if (ChadIsPrime(i))
            printf("a prime number\n");
        else
            printf("not a prime number\n");
    }

    return 0;
}

int SlowIsPrime(int number) {
    int dividors = 0;

    if (number < 2)
        return FALSE;

    for (int i = 1; i < number; i++) {
        if (number % i == 0)
            dividors++;
    }

    if (dividors < 2)
        return TRUE;
    
    return FALSE;
}

int BetterIsPrime(int number) {
    int limit = number / 2;

    if (number < 2)
        return FALSE;

    for (int i = 3; i < limit; i++) {
        if (number % i == 0)
            return FALSE;
    }

    return TRUE;
}

int ChadIsPrime(int number) {
    if (number <= 1) return FALSE;
    if (number == 2) return TRUE;
    if (number % 2 == 0) return FALSE;

    int limit = sqrt(number) + 1;

    for (int i = 3; i <= limit; i += 2) {
        if (number % i == 0)
            return FALSE;
    }
            
    return TRUE;
}