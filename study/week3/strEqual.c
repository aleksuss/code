// code works

#include <stdio.h>

#define LIMIT 100

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == 0 ) {
            return 1;
        }
    }
    return 0;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str1[LIMIT];
    char str2[LIMIT];
    
    fscanf(in, "%100s %100s", str1, str2);
    fclose(in);
    if ( strEqual(str1, str2) ) {
        fprintf(out, "yes\n");
    } else {
        fprintf(out, "no\n");
    }
    fclose(out);
    
    return 0;
}
