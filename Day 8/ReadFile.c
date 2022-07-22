#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Invalid amount of arguments\n");
        return -1;
    }

    FILE *inputFile = fopen(argv[1], "r");
    char tempChar;

    if (inputFile == NULL) {
        printf("Error opening input file\n");
        return -1;
    }

    while ((tempChar = getc(inputFile)) != EOF) {
        printf("%c", tempChar);
    }
    
    fclose(inputFile);

    return 0;
}