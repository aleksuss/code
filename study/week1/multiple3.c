#include <stdio.h>

#define DIVISOR 3

int main() {
    int last;
    
    scanf("%d", &last);
    
    max -= max % DIVISOR;
    for ( int i = 0; i < last; i += DIVISOR ) {
        printf("%d ", i);
    }
    printf("%d\n", last);
    
    return 0;
}
