#include<stdio.h>

void cclass(char c)
{
    char *s;
    if (('A' <= c && c <= 'L') || ('a' <= c && c <= 'l')) {
        printf("'%c' in first half of alphabet\n", c);
    }
    else if (('L' < c && c <= 'Z') || ('l' < c && c <= 'z')) {
        printf("'%c' in second half of alphabet\n", c);
    }
}

int main(int argc, char *argv[])
{
    for (char c = 'K'; c < 'O'; c++) {
        cclass(c);
    }
    return 0;
}
