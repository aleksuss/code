#include <stdio.h>

int main() {
    int number;
    int count = 0;

    scanf("%d", &number);
    if ( number <= 0 ) {
        count += 1;
        number *= -1;
    }
    for ( int i = number; i > 0; i /= 10 ) {
        count +=1;
    }
    printf("%d\n", count);

    return 0;
}
