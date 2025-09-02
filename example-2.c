/*
Example-2
C Program to check equivalence of two numbers using if statement
*/
#include <stdio.h>

int main() {
    int num1, num2;

    // Take input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Check equivalence using if statement
    if (num1 == num2) {
        printf("Both numbers are equal.\n");
    } else {
        printf("Numbers are not equal.\n");
    }

    return 0;
}
