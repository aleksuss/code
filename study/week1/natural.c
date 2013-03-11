#include <stdio.h>

int main() {
    int max;
    
    scanf("%d", &max);
    
    for ( int i = 1; i < max; i++ ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    
    return 0;
}
