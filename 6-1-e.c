#include<stdio.h>

void cmp(int i, int j)
{
    if (i > j) {
        printf("%d is greater than %d.\n", i, j);
    }
    else if (i < j) {
        printf("%d is less than %d.\n", i, j);
    }
    else {
        printf("%d is equal to %d.\n", i, j);
    }
}

int main(int argc, char *argv[])
{
    int j = 3;
    for (int i = 0; i < j * 2; i++) {
        cmp(i, j);
    }
    return 0;
}
