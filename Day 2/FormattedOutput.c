#include <stdio.h>

#define ALASKA "Alaska"
#define ARIZONA "Arizona"
#define ALASKA_SIZE 591000
#define ALASKA_FOREST_SIZE 201632
#define ARIZONA_SIZE 114000
#define ARIZONA_FOREST_SIZE 30287

int main() {
    printf("State        Size     Forest    Percentage\n");
    printf("%-10s %6d %10d %12.2f%%\n", ALASKA, ALASKA_SIZE, ALASKA_FOREST_SIZE, (ALASKA_FOREST_SIZE / (float) ALASKA_SIZE) * 100);
    printf("%-10s %6d %10d %12.2f%%\n", ARIZONA, ARIZONA_SIZE, ARIZONA_FOREST_SIZE, (ARIZONA_FOREST_SIZE / (float) ARIZONA_SIZE) * 100);

    return 0;
}