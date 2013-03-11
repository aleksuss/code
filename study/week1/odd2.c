// epic win
#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min += 1;
    }
	if ( max % 2 == 0 ) {
        max -= 1;
    }

    for ( int i = min; i < max; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    
    return 0;
}
