#include <stdio.h>

int main() {
    int count;
    
    scanf("%d", &count);
    
    for ( ; count > 0; count-- ) {
        printf("%d ", count);
    }
    printf("0\n");
    
    return 0;
}