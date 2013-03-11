// code works
#include <stdio.h>

int main() {
	int print, step, total;
	
	scanf("%d %d %d", &print, &step, &total);
	
	for ( int i = 1; i < total; i++ ) {
		printf("%d ", print);
		print += step;	
	}
	
	printf("%d\n", print);

	return 0;
}