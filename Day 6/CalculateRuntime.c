#include <stdio.h>
#include <time.h>

#define lol 1000000

void UselessFunction(int timesToRepeat);

int main() {
    double startTime, endTime, totalTime;

    startTime = (double) clock() / CLOCKS_PER_SEC;

    UselessFunction(lol);

    endTime = (double) clock() / CLOCKS_PER_SEC;
    totalTime = endTime - startTime;

    printf("The program took %lf seconds to complete\n", totalTime);

    return 0;
}

void UselessFunction(int timesToRepeat) {
    int lolCounter = 0;

    for (int i = 0; i < timesToRepeat; i++)
        lolCounter++;
}