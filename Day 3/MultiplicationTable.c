#include <stdio.h>

#define LIMIT 10

int main() {
    for (int i = 0; i < LIMIT; i++) {
        for (int j = 0; j < LIMIT; j++) {
            printf("%4i", ((i + 1) * (j + 1)));
        }

        printf("\n");
    }

    return 0;
}