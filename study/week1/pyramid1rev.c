#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int i = size; i >= 1; i-- ) {
        int j = 1;
        for ( ; j < i; j++ ) {
            printf("%d ", j);
        }
        printf("%d\n", j);
    }
    
    return 0;
}
