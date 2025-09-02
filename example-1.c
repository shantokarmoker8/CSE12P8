/*
Example-1
C program calculate the absolute value of an integer using if statement.
*/
#include <stdio.h>

int main() {
    int num;

    // Take input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // If number is negative, convert it to positive
    if (num < 0) {
        num = -num;   // multiply by -1 to make positive
    }

    // Print the absolute value
    printf("Absolute value = %d\n", num);

    return 0;
}

