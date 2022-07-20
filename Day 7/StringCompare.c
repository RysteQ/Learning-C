#include <stdio.h>
#include <string.h>

int main() {
    char stringOne[] = "lol";
    char stringTwo[] = "lol";

    if (strcmp(stringOne, stringTwo) != 0) {
        printf("The strings are not equal\n");
        return 0;
    }

    printf("The strings are equal\n");

    return 0;
}