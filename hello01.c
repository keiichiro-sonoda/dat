#include <stdio.h>

typedef char** char_pp;

int main(int argv, char_pp argc) {
    printf("引数の数 %d 個\n", argv - 1);
    return 0;
}