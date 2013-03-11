#include <stdio.h>

#define LIMIT 101

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != 0; len++ );
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT];
    
    fscanf(in, "%s", str);
    fclose(in);
    fprintf(out, "%d\n", strLen(str));
    fclose(out);
    
    return 0;
}
