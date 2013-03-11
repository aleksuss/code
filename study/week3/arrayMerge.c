//code works
#include <stdio.h>

#define LIMIT 101

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int len3 = len1 + len2;

    for ( int i = 0, j = 0, k = 0; k < len3; k++ ) {
        if ( src1[i] < src2[j] && i < len1 ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }
}

int main() {
    int len1 = 7;
    int len2 = 9;
    int len3 = len1 + len2;
    int src1[7] = { 1, 3, 3, 4, 5, 8, 9 };
    int src2[9] = { 1, 2, 2, 3, 4, 6, 7, 8, 10 };
    int target[len3];

    arrayMerge(target, src1, len1, src2, len2);
    for ( int i = 0; i < len3; i++ ) {
        printf("%d ", target[i]);
    }
    printf("\n");
    
    return 0;
}