#include <stdio.h>

int getInt();
float getFloat();

int main() {
    float startingBalance;
    float amount;
    int command;

    printf("Enter starting balance -> ");
    startingBalance = getFloat();

    while (1) {
        printf("1 for deposit and 2 for withdraw -> ");
        command = getInt();

        if (command == 1) {
            printf("Amount to deposit -> ");
            amount = getFloat();

            if (amount > 0) {
                startingBalance += amount;
            } else {
                printf("Invalid amount\n");
            }
        } else if (command == 2) {
            printf("Amount to withdraw -> ");
            
            amount = getFloat();
            if ((startingBalance - amount) > 0) {
                startingBalance -= amount;
            } else {
                printf("Invalid amount\n");
            }
        } else {
            printf("Invalid operation\n");
            continue;
        }

        printf("You total amount of money is %.2f\n", startingBalance);
    }
}

int getInt() {
    int toReturn;

    scanf("%i", &toReturn);

    return toReturn;
}

float getFloat() {
    float toReturn;

    scanf("%f", &toReturn);

    return toReturn;
}