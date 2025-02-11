#include <stdio.h>

long count_1(long nc);
double count_2(double nc);

int main() {

    // long nc_1 = 0;
    double nc_2 = 0;
    // long res_1 = count_1(nc_1);
    double res_2 = count_2(nc_2);
    // printf("%ld\n", res_1);
    printf("%.f\n", res_2);

    return 0;
}

long count_1(long nc) {
    while (getchar() != EOF)
        ++nc;
    return nc;
}

double count_2(double nc) {
    for (; getchar() != EOF; ++nc);
    return nc;
}