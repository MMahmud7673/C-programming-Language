#include <stdio.h>
#define IN 1
#define OUT 0


int main() {

    if (freopen("text.txt", "r", stdin) == NULL) printf("Faylni ochib bo'lmadi!");

    int c, wordLength = 0, wordDigit = 0, state = OUT;
    int ndigit[100] = {0};

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            wordLength = 0;
            ++wordDigit;
        }
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            ++wordLength;
            ndigit[wordDigit] = wordLength;
        }
    }
    int max;
    for (int i = 1; i <= wordDigit; i++) {
        if (ndigit[i] > max) {
            max = ndigit[i];
        }
    }

    for (int row = max; row > 0; row--) {
        for (int i = 1; i <= wordDigit; i++) {
            if (ndigit[i] >= row) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= wordDigit; i++) {
        printf(" %d ", ndigit[i]);
    }
    printf("\n");

    // for (int i = 1; i <= wordDigit; i++) {
    //     printf("%d: ", ndigit[i]);
    //     for (int j = 1; j <= ndigit[i]; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    return 0;
}