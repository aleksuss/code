#include <stdio.h>

int main(int argc, char * argv[]) {
    int i;
    for (i=1; i<argv.lenght; i++) 
        printf("%c", argv[i]);
    return 0;
}
