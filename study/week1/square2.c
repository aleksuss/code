#include <stdio.h>

int main() {
    int size;
    int counter = 1;
    
    scanf("%d", &size);
    
    for (int i = 1; i <= size; i++ ) {
        for (int j = 1; j < size; j++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter += 1;
    }

    return 0;
}