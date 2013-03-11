#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min < 0 ) {
        min -= min % 3;
    } else if ( min % 3 != 0 ) {
        min += 3 - min % 3;
    }
    
    for ( int i = min; i <= max; i += 3 ) {
        printf("%d\n", i);
    }
    
    return 0;
}
