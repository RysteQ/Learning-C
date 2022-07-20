#include <stdio.h>

int main() {
    int xValue = 10;
    int yValue = 20;

    int *p1, *p2;

    p1 = &xValue;
    p2 = &yValue;

    printf("The value of xValue is %i and the value of yValue is %i\n", *p1, *p2);

    *p1 = 15;
    *p2 = *p2 * 2;
    
    printf("The value of xValue is %i and the value of yValue is %i\n", *p1, *p2);
    
    p1 = p2;
    *p1 = 15;

    printf("The value of xValue is %i and the value of yValue is %i\n", *p1, *p2);

    return 0;
}