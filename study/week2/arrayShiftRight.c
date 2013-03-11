#include <stdio.h>

#define SIZE 11

void arrayShiftRight(int array[], int size) {
    int last = size - 1;
    int temp = array[last];
    
    for ( int i = last; i > 0; i-- ) {
        array[i] = array[i-1];
    }
    array[0] = temp;
}

int main() {
    int array[SIZE] = { 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    arrayShiftRight(array, SIZE);
    
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    
    return 0;
}  


/*
Условие задачи

Написать функцию:
void arrayShiftRight(int array[], int size)
Реализовать циклический сдвиг массива на 1 элемент вправо.
Использование дополнительного массива не разрешается.
*/