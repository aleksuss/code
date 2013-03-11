#include <stdio.h>

int main() {
    int number;
    
	scanf("%d", &number);

	if ( number % 2 != 0 ) {
        printf("yes\n");
	} else {
		printf("no\n");
	}
	
    return 0;
}
