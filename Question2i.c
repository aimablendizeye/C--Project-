

#include <stdio.h>

int main() {
    int a = 5, b = 9;

    printf("Inputs are: %d and %d\n", a, b);
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("Result in Hex: %X %X\n", a & b, a | b);

    return 0;
}