#include <stdio.h>

int getInt();

int main() {
    int total = 0;

    for (int i = 0; i < 10; i++) {
        printf("Number %i -> ", i);
        total += getInt();
    }

    printf("The total sum of the numbers is %i\n", total);

    return 0;
}

// I did not learn this from the book, this is something I remember doing
int getInt() {
    int toReturn;

    scanf("%i", &toReturn);

    return toReturn;
}