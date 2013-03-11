#include <stdio.h>

int main() {
    int size;
    int counter;
    
    scanf("%d", &size);
    
    counter = size * size - size + 1;
    
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 1; j < size; j++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        
        printf("%d\n", counter);
        counter -= 2 * size - 1;
    }

    return 0;
}