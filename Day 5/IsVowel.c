#include <stdio.h>

typedef enum { FALSE, TRUE } bool;

// I know I can use #include "SIO.h" to get the function char GetChar(void)
// from there but I don't because I want everything I write to be a
// standalone file not linked to anything else in this repository
char GetChar(void);
bool IsVowel(char character);

int main() {
    printf("Enter a character -> ");
    char characterToCheck = GetChar();

    printf("The character %c is ", characterToCheck);

    if (IsVowel(characterToCheck)) printf("a vowel\n");
    else printf("not a vowel\n");

    return 0;
}

char GetChar(void) {
    char toReturn;

    scanf("%c", &toReturn);

    return toReturn;
}

bool IsVowel(char character) {
    switch (character) {
        case 'a': case 'e': case 'u': case 'i': case 'o': return TRUE;
        default: return FALSE;
    }
}