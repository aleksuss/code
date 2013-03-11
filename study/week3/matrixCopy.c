void matrixCopy(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            target[i][j] = source[i][j];
        }
    }
}

// epic win