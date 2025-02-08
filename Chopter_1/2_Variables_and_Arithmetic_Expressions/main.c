#include <stdio.h>

int main() {
    int farh, celsius;
    int lower = 0, upper = 300, step = 20;

    farh = lower;

    while (farh <= upper) {
        celsius = 5 * (farh - 32) / 9;
        printf("%d\t%d\n", farh, celsius);
        farh += step;
    }
}