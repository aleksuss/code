#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char temp;
    
    for ( ; fscanf(in, "%c", &temp) == 1; ) {
        if ( temp > 64 && temp < 91 ) {
            temp += 32;
        }
        fprintf(out, "%c", temp);
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
