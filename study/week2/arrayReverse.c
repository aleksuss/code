// code works
#include <stdio.h>

void arrayReverse(int array[], int size) {
    int temp;
            
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        temp = array[j];
        array[j] = array[i];
        array[i] = temp;
    }
}

int main() {
    int array[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    arrayReverse(array, 11);
    
    for ( int i = 0; i < 11; i++ ) {
        printf("%d ", array[i]);
    }
    
    return 0;
}    
/*
Условие задачи
Написать функцию:
void arrayReverse(int array[], int size)
Использование дополнительного массива не разрешается.
void arrayReverse(int array[], int size) {
    int temp;
            
    for ( int i = 1; i < size; i++ ) {
        for ( int j = 0; j < size - i; j++ ) {
            temp = array[j+1];
            array[j+1] = array[j];
            array[j] = temp;
        }
    }
}
*/