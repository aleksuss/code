#include <stdio.h>

#define SIZE 11

void arraySort(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        int max = array[i];
        int index = i;
        
        for ( int j = 0; j < i; j++ ) {
            if ( array[j] > max ) {
                max = array[j];
                index = j;
            } 
        }
        array[index] = array[i];
        array[i] = max;
    }
}


int main() {
    int array[SIZE] = { 5, 0, 8, 6, 10, 1, 4, 9, 2, 3, 7 };
    
    arraySort(array, SIZE);
    
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}  

/*
Условие задачи
Написать функцию:
void arraySort(int array[], int size)
Отсортировать элементы в порядке неубывания.
Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла.
*/