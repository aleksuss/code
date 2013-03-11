#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    int buffersize = hi - lo;
    int buffer[buffersize];
    int i = lo;
    int j = mid + 1;
    int k;

    mid += 1;
    hi += 1;
    for ( k = 0; j < hi && i < mid; k++ ) {
        if ( array[i] <= array[j] ) {
            buffer[k] = array[i];
            i += 1;
        } else {
            buffer[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        buffer[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        buffer[k] = array[j];
    }
    for ( int i = lo, j = 0; i < hi; i++, j++ ) {
        array[i] = buffer[j];
    }
}

void mergeSort(int array[], int lo, int hi) {
    int mid;
    
    if ( lo < hi ) {
        mid = (lo + hi) / 2;
        mergeSort(array, lo, mid);
        mergeSort(array, mid+1, hi);
        merge(array, lo, mid, hi);
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
    mergeSort(array, 0, len-1);
    for ( int i = 0; i < len - 1; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[len-1]);
    fclose(out);
    
    return 0;
}