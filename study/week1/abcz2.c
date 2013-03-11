#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        printf("alpha\n");
    } else if ( a % 3 == 0 ) {
        printf("bravo\n");
    } else if ( a % 5 == 0 ) {
        printf("charlie\n");
    } else {
        printf("zulu\n");
    }
    return 0;
}
