#include <stdio.h>

 int main() {
    int len;
    int x;
    
    scanf("%d", &len);
    for ( int i = 0; i < len; i++ ) {
        scanf("%d", &x);
        printf("%d\n", x^42);           
    }

    return 0;
}