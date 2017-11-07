#include<stdio.h>
#include<assert.h>

void strcpy(char *dest, char *src) {
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    dest[i] = '\0';
}

size_t strlen(char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++);
    return i;
}


void asserteq(char *dest, char *src) {
    for (int i = 0; dest[i] != '\0'; i++) {
        assert(dest[i] == src[i]);
    }
}

int main(int argc, char *argv[])
{
    // We are implementing strlen (and not strnlen) and
    // therefore do not consider buffer overflows.

    char *strs[] = {"abc", "hello", "", "katkatkat"};
    int lstrs = sizeof(strs) / sizeof(strs[0]);
    for (int i = 0; i < lstrs; i++) {
        char* str1 = strs[i];
        int lstr1 = strlen(str1) + 1;
        char str2[lstr1];

        strcpy(str2, str1);
        asserteq(str1, str2);
    }

    return 0;
}

