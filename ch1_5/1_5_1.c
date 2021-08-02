#include <stdio.h>

main() {
    int c;
    // c = getchar();
    // while (c != EOF) {
    while ((c = getchar()) != EOF) {
        putchar(c);
        // c = getchar();
    }
}