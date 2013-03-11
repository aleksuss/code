#include <stdio.h>

int main() {
    int max;
    
    scanf("%d", &max);
    
    if ( max % 2 == 0 && max != 0) {
        max -= 1;
    }
    for ( int i = 1; i < max; i+=2 ) {
        printf("%d_", i);
    }
    printf("%d\n", max);
    
    return 0;
}
