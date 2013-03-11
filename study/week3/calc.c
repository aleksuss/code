#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int a, b;
    char sign;
    float sum = 0;

    for ( ; fscanf(in, "%d", &a) == 1; ) {

        fscanf(in, "%c", &sign);
        fscanf(in, "%d", &b);
        if ( sign == '+' ) {
            sum += b;
        } else if ( sign == '-' ) {
            sum -= number;
        } else if ( sign == '*' ) {
            sum *= number;
        } else if ( sign == '/' ) {
            sum /= number;
        }
    }
    fprintf(out, "%g\n", sum);
    printf("%g\n", sum);
    fclose(in);
    fclose(out);
 
    return 0;
}