#include<stdio.h>
#include<assert.h>

int factorial(int n) {
    if (n <= 0) {
        return 1;
    }

    int fac = 1;
    while (n--) {
        fac *= n + 1;
    }

    return fac;
}

int main(int argc, char *argv[])
{
    int results[] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600 };

    for (int i = 0; i < 13; i++) {
        int fac = factorial(i);
        printf("factorial(%d) = %d\n", i, fac);
        assert(results[i] == fac);
    }

    return 0;
}

