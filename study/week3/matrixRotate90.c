#include <stdio.h>

#define SIZE 5

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, k = size - 1; col < size && k >= 0; col++, k-- ) {
            target[row][col] = source[k][col];
        }
    }
}

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int col = 0, j = size - 1; col < size; col++, j-- ) {
        for ( int row = 0; row < size; row++ ) {
            target[col][row] = source[j][row];
        }
    }
}

int main() {
    int matrix[SIZE][SIZE] = {  1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5 };
    int new[SIZE][SIZE];

    matrixRotate90(new, matrix, SIZE);


    for ( int i = 0; i < SIZE; i++ ) {
        for (int j = 0; j < SIZE - 1; j++ ) {
            printf("%2d ", new[i][j]);
        }
        printf("%2d\n", new[i][SIZE-1]);
    }
    for ( int i = 0; i < 25; ++i )
    {
        printf("%d ", new[i]);
    }
    printf("\n");

    
    return 0;                        
}