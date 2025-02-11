#include <stdio.h>

int count_nl(int c, int nl);

int main() {

    int c, nl = 0;
    int res = count_nl(c, nl);
    printf("%d\n", res);

    return 0;
}

int count_nl(int c, int nl) {
    while ((c = getchar()) != EOF)
        if (c == '\n') ++nl;
    return nl;    
}