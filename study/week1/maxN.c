// code works
#include <stdio.h>

int main() {
    int count, max, temp;
    
    scanf("%d %d", &count, &max);
    
    for ( int i = 1; i < count; i++ ) {
        scanf("%d", &temp);
        
        if ( temp > max ) {
            max = temp;
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}
