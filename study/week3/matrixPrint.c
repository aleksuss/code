#include <stdio.h>

#define SIZE 3

void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    for ( int col = 0; col < size; col++ ) {
        for ( int row = 0; row < size - 1; row++ ) {
            fprintf(out, "%d ", matrix[row][col]);
        }
        fprintf(out, "%d\n", matrix[size-1][col]);
    }
}



int main() {
    FILE *out = fopen("task.out", "w");
    int matrix[SIZE][SIZE] = { 1, 1, 1, 2, 2, 2, 3, 3, 3 };
    
    matrixPrint(out, matrix, SIZE);
    fclose(out);
    
    return 0;
}
    