#include <stdio.h>

int main() {
    char x;
    unsigned char y;
    x = -1;
    (unsigned char)x;
    y = x;
    printf("%u",y);
    return 0;
}
