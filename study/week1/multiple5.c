#include <stdio.h>

#define DIVISOR 5

int main() {
    int max;
    
    scanf("%d", &max);
    
    max -= max % DIVISOR;
    for ( int i = 0; i < max; i += DIVISOR ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    return 0;
}
