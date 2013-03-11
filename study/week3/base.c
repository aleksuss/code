#include <stdio.h>

int powerOfN(int exponent, int number) {
    int power = 1;
    
    if ( number == 0 ) {
        return 1;
    }
    for ( int i = 0; i < number; i++ ) {
        power *= exponent;
    }
    return power;
}

int places(int number, int base) {
    int count = 0;

    for ( int i = number; i > 0; i /= base ) {
        count += 1;
    }
    return count;
}

int main() {
    int number;
    int base;

    scanf("%d %d", &number, &base);
    for ( int i = places(number, base) - 1; i >= 0; i-- ) {
        printf("%d", number/powerOfN(base, i));
        number %= powerOfN(base, i);
    }
    printf("\n");

    return 0;
}