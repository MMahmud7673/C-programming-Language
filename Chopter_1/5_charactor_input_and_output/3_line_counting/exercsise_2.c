#include <stdio.h>

void delet_space(int c, int prev);

int main() {

    int c, prev = 0;
    delet_space(c, prev);
    return 0;
}

void delet_space(int c, int prev){
    while ((c = getchar()) != EOF){
        if (c != ' ' || prev != ' ') putchar(c);
        prev = c;
    }
}