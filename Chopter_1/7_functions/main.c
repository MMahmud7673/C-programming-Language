#include <stdio.h>

int power(int m, int n);

int main() {

    for (int i = 0; i < 10; i++)
        printf("%d %d %d\n", i, power(2, i), power(-2, i));

    return 0;
}

int power(int m, int n) {
    int i, p = 1;
    for (i = 1; i < n; i++)
        p *= m;

    return p;
}