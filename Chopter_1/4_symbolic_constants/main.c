#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    int farh;
    for (farh = LOWER; farh <= UPPER; farh += STEP) {
        printf("%d\t%.f\n", farh, (5.0 / 9.0) * (farh - 32));
    }
}