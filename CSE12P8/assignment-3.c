/*
Assignment-3
Implementation of Looping: FOR statement (break and continue)
*/
#include <stdio.h>
int main() {
    int i;

    // Example of FOR loop with continue
    printf("Numbers from 1 to 10 (skipping 5):\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5) continue;  // skip printing 5
        printf("%d ", i);
    }

    // Example of FOR loop with break
    printf("\n\nNumbers from 1 to 10 (stop at 7):\n");
    for(i = 1; i <= 10; i++) {
        if(i == 7) break;  // exit loop when i = 7
        printf("%d ", i);
    }

    return 0;
}
