#include <stdio.h>

int main() {
    int index, number;
    int power = 1;
    
    scanf("%d %d", &index, &number);
    
    for ( int i = 0; i < number; i++ ) {
        printf("%d ", power);
        power *= index;
    }
    printf("%d\n", power);
    
    return 0;
}
