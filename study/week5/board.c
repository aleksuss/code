#include <stdio.h>

#define MAX_WIDTH 100
#define MAX_PATH 1000

int main() {
    int maxAmount = 0;
    int board[MAX_WIDTH][MAX_WIDTH];
    int heigt, width;
    char path[MAX_PATH];
    int index = 0;
    FILE *in = fopen("task.in", "r");
    //FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d %d", &heigt, &width);
    for ( int i = 0; i < heigt; i++ ) {
        for ( int j = 0; j < width; j++ ) {
            fscanf(in, "%d", &board[i][j]);
        }
    }
    fclose(in);
    for ( int i = heigt - 1, j = 1; i >= 0 && j < width; ) {
        if ( board[i-1][j-1] >= board[i][j] && i > 0 ) {
            maxAmount += board[i-1][j-1];
            i -= 1;
            path[index] = 'u';
            index += 1;
        } else if ( j < width ) {
            maxAmount += board[i][j];
            j += 1;
            path[index] = 'r';
            index += 1;
        }
    }
    printf("%d %s\n", maxAmount, path);
    
    return 0;
}
