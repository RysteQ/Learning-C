#include <stdio.h>
#include <stdlib.h>

#define ELEMENTS 10

int main() {
    // offset is not a pointer, just making this VERY clear
    int *list, offset;
    
    list = malloc(ELEMENTS * sizeof(int));
    offset = 0;

    if (list == NULL) {
        printf("Error allocating %i bytes of memory\n", ELEMENTS * sizeof(int));
        return -1;
    }

    // I am not in the mood to write a paragraph of code to see if this works
    printf("Freeing up %i bytes of memory\n", ELEMENTS * sizeof(int));
    free(list);

    return 0;
}