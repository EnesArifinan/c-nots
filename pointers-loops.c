#include <stdio.h>

int main() {
    __int16 myNumbers[4] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++) {
    printf("%p\n", &myNumbers[i]);
    }
}