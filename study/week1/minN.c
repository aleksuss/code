// code works
#include <stdio.h>

int main() {
    int count, min, temp;
    
    scanf("%d %d", &count, &min);
    
    for ( int i = 1; i < count; i++ ) {
        scanf("%d", &temp);
        
        if ( temp < min ) {
            min = temp;
        }
    }
    
    printf("%d\n", min);
    
    return 0;
}
