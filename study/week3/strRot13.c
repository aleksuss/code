#include <stdio.h>

#define LIMIT 100

void strRot13(char str[]) {
    for ( char *s = str; *s != 0; s++ ) {
        if ( *s >= 'a' && *s <= 'z' ) {
            if ( *s > 'm' ) {
                *s -= 13;
            } else {
                *s += 13;
            }
        } else if ( *s >= 'A' && *s <= 'Z' ) {
            if ( *s > 'M' ) {
                *s -= 13;
            } else {
                *s += 13;
            }
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT];

    fscanf(in, "%100s", str);
    fclose(in);
    strRot13(str);
    fprintf(out, "%s\n", str);
    fclose(out);

    return 0;
}