#include <stdio.h>

int main() {
    int farh;

    for (farh = 0; farh <= 300; farh += 20) {
        printf("%d\t%.f\n", farh, (5.0 / 9.0) * (farh - 32));
    }

    printf("\n==========================================\n");
    for (farh = 300; farh >= 0; farh -= 20) {
        printf("%d\t%.f\n", farh, (5.0 / 9.0) * (farh - 32));
    }

    return 0;
}

