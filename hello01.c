#include <stdio.h>

typedef char** char_pp;

int main(int argv, char_pp argc) {
    printf("引数の数 %d 個\n", argv - 1);
    for (int i = 1; i < argv; i++) {
        printf("引数%02d: %s\n", i, argc[i]);
    }
    return 0;
}