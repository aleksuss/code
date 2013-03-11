#include <stdio.h>

#define SIZE 11


void arrayExchange(int array[], int len) {
    len -= 1;
    
    for ( int i = 0; i < len; i += 2 ) {
        int *temp = &array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    }
}


int main() {
    int array[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    arrayExchange(array, SIZE);
    
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");   
    
    return 0;
}

/*
Условие задачи

Написать функцию
void arrayExchange(int array[], int len)

Попарно обменять местами все четные элементы массива с нечетными, начиная с нулевого.
a[0] <-> a[1] a[2] <-> a[3] .....
Если последний элемент четный – не менять его.

Запрещено использование дополнительного массива.
*/