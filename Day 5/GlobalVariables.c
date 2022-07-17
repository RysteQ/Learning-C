#include <stdio.h>

static int staticVariable = 3141592;
int nonStaticVariable = 3141592;

static int StaticReturnNumberTen(void);
int ReturnNumberTen(void);

int main() {
    printf("This is a global variable with a value of %i that every file can access", nonStaticVariable);
    printf("This is a global variable with a value of %i that only this file can access", staticVariable);

    // the StaticReturnNumberTen is only accessible for this file
    int numberTen = StaticReturnNumberTen();
    
    // But this function is accessible to the file is linked to (I may be wrong with this, I am sleep deprived)
    numberTen = ReturnNumberTen();

    return 0;
}

static int StaticReturnNumberTen(void) {
    return 10;
}

int ReturnNumberTen(void) {
    return 10;
}