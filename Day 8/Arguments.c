#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Invalid amount of arguments\n");
        return -1;
    }

    printf("Argument: %s\n", argv[1]);

    return 0;
}