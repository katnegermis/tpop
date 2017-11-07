#include<stdio.h>


int main(int argc, char *argv[])
{
    char s[] = {'a', 'b', 'c', 'd', 'e', '0', '1', '2', '3', '4'};
    int len = sizeof(s) / sizeof(s[0]);
    for (int i = 0; i < len; i++) {
        putchar(s[i]);
        putchar('\n');
    }

    return 0;
}

