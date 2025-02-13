#include <stdio.h>

int main() {
    if (freopen("text.txt", "r", stdin) == NULL) {
        printf("Faylni ochib bo'lmadi!");
    }
    int c, nwhite = 0, nother = 0;
    int ndigit[10];

    for (int i = 0; i < 10; i++) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0'];
        } else if (c == '\n' || c == '\t' || c == ' ') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", ndigit[i]);
    }
    printf("Nwhite: %d, Nother: %d", nwhite, nother);
    return 0;
}