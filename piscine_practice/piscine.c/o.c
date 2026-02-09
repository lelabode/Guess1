#include <stdio.h>

int main(void) {
    char sym;
    char plus = '+';
    int r, k;

    scanf(" %c", &sym);   // user types: o

    for (r = 0; r < 5; r++) {
        int symCount = 2 * r + 1;
        int plusCount = (9 - symCount) / 2;

        for (k = 0; k < plusCount; k++)
            printf("%c", plus);

        for (k = 0; k < symCount; k++)
            printf("%c", sym);

        for (k = 0; k < plusCount; k++)
            printf("%c", plus);

        printf("\n");
    }

    return 0;
}




//++++o++++
//+++ooo+++
//++ooooo++
//+ooooooo+
//ooooooooo
