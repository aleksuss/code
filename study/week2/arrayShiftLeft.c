#include <stdio.h>

#define SIZE 11


void arrayShiftLeft(int array[], int size) {
    int temp = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        array[i-1] = array[i];
    }
    array[size-1] = temp;
}

int main() {
    int array[SIZE] = { 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    arrayShiftLeft(array, SIZE);
    
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("\n");
    printf("%lu\n", sizeof(array));
    
    return 0;
}  
