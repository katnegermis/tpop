#include<stdio.h>
#include<assert.h>

void strncpy(char *dest, char *src, int n) {
    for (int i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
}


size_t strlen(char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++);
    return i;
}


void asserteq(char *dest, char *src) {
    for (int i = 0; src[i] != '\0'; i++) {
        assert(dest[i] == src[i]);
    }
}


int main(int argc, char *argv[])
{
    char *strs[] = {"abc", "hello", "", "katkatkat"};
    int lstrs = sizeof(strs) / sizeof(strs[0]);
    for (int i = 0; i < lstrs; i++) {
        char* str1 = strs[i];
        int lstr1 = strlen(str1) + 1;
        char str2[lstr1+5];

        strncpy(str2, str1, lstr1);
        asserteq(str2, str1);
    }

    return 0;
}

