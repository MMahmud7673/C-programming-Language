#include <stdio.h>

int main() {
    int c, nl, nt, sp;
    nl = nt = sp = 0;
    while ((c = getchar()) != EOF)
        if(c == '\n') 
            ++nl;
        else if (c == '\t')
            ++nt;
        else if (c == ' ')
            ++sp;
    printf("New line: %d\nTabs: %d\nSpase: %d", nl, nt, sp);

    return 0;
}