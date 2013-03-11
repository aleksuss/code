#include <stdio.h>

int main() {
	int x, y;
	
	scanf("%d %d", &x, &y);
	
	if ( x > y ) {
		printf("%d\n", x);
	} else if ( x < y ) {
		printf("%d\n", y);
	} else {
		printf("%d\n", x);
	}
	
	return 0;
}
