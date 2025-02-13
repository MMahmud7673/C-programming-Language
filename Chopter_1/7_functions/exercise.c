#include <stdio.h>

double harorat(double farh);

int main() {
    for (int i = 0; i <= 300; i += 20) {
        double res = harorat(i);
        printf("F: %d\tC: %.0lf\n", i, res);
    }

    return 0;
}

double harorat(double farh) {
    return (5.0 / 9.0) * (farh - 32);
}