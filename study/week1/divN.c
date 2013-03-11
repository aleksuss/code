#include <stdio.h>

int main() {
    int min, max; 
    int divisor;
    
    scanf("%d %d %d", &min, &max, &divisor);
    
    if ( min < 0 ) {
        min -= min % divisor;
    } else if ( min % divisor != 0 ) {
        min += divisor - min % divisor;
    }
    
    for ( int i = min; i <= max; i += divisor ) {
        printf("%d\n", i);
    }
    
    return 0;
}
