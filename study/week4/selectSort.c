#include <stdio.h>

void selectSort(int array[], int size) {
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

int scanLen(FILE *in) {
    int size;
    
    fscanf(in, "%d", &size);
    return size;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = scanLen(in);
    int array[len];
    
    for ( int i = 0; i < len; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    fclose(in);
    selectSort(array, len-1);
    for ( int i = 0; i < len - 1; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[len-1]);
    fclose(out);
    
    return 0;
}