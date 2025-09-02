/*
Example-4
C program to find biggest among two numbers using if else.
*/
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d is the biggest number.\n", num1);
    } else {
        printf("%d is the biggest number.\n", num2);
    }

    return 0;
}
