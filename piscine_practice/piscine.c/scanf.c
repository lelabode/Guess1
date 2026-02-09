#include <stdio.h>

int main(void) {
    char sym;  // '#'
    char b = '+';    // '+'
    int r, k;

    // Use leading space to skip newlines/spaces in input
    
    scanf(" %c", &sym);

    for (r = 0; r < 5; r++) {
        int hashes = 2 * r + 1;
        int pluses = (9 - hashes) / 2;

        for (k = 0; k < pluses; k++) printf("%c", b);
        for (k = 0; k < hashes; k++) printf("%c", sym);
        for (k = 0; k < pluses; k++) printf("%c", b);

        printf("\n");
    }

    return 0;
}
