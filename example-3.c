/*
Example-3
C program to read any number as input through the keyboard and find out whether it is Odd Number or Even Number.
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an Even Number.\n", num);
    } else {
        printf("%d is an Odd Number.\n", num);
    }

    return 0;
}
