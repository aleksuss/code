#include <stdio.h>

int powerOf2(int exponent) {
    if ( exponent < 0 ) {
        return 0;
    }
    if ( exponent == 0 ) {
        return 1;
    }
    return 2 << (exponent - 1);
}


int main() {
    printf("%d\n", powerOf2(-3));

    return 0;
}