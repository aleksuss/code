#include <stdio.h>

int main() {
    int number;
    int power = 1;
    
    scanf("%d", &number);
    
    for ( int i = 0; i < number; i++ ) {
        printf("%d ", power);
        power *= 2;
    }
    printf("%d\n", power);
    
    return 0;
}
