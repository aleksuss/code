#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min < 0 ) {
        min -= min % 5;
    } else if ( min % 5 != 0 ) {
        min += 5 - min % 5;
    }
    
    for ( int i = min; i <= max; i += 5 ) {
        printf("%d\n", i);
    }
    
    return 0;
}
