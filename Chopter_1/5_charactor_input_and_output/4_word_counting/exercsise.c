#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
    freopen("text.txt", "r", stdin);
    int c, state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            c = '\n';
        }
        putchar(c);
    }

    return 0;
}