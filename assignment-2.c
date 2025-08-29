/*
Assignment-2
Implement Branching The IF statement, Branching SWITCH statement
*/

#include <stdio.h>
int main() {
    int num, day;

    // IF statement
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0) printf("Positive\n");
    else if(num < 0) printf("Negative\n");
    else printf("Zero\n");

    // SWITCH statement
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid input!\n");
    }
    return 0;
}
