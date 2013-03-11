#include <stdio.h>

int partition(int array[], int start, int end) {
    int pivotIndex = (start + end) / 2;
    int pivot = array[pivotIndex];
    
    array[pivotIndex] = array[end];
    array[end] = pivot;
    pivotIndex = end;
    for ( int i = start, minIndex = start, maxIndex = start; minIndex < end && maxIndex < end; i++ ) {
        int tmp;
        
        for ( maxIndex = i; array[maxIndex] < pivot; maxIndex++ );
        for ( minIndex = maxIndex; array[minIndex] > pivot; minIndex++ );
        tmp = array[minIndex];
        array[minIndex] = array[maxIndex];
        array[maxIndex] = tmp;
        if ( minIndex == end ) {
            pivotIndex = maxIndex;
        }
        if ( maxIndex == end ) {
            pivotIndex = minIndex;
        }
    }
    return pivotIndex;
}

void quickSort(int array[], int lo, int hi) {
    int pivot = partition(array, lo, hi);
    
    if ( lo < pivot - 1 ) {
        quickSort(array, lo, pivot-1);
    }
    if ( hi > pivot + 1 ) {
        quickSort(array, pivot+1, hi);
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
    quickSort(array, 0, len-1);
    for ( int i = 0; i < len - 1; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[len-1]);
    fclose(out);
    
    return 0;
}
