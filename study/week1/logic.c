#include <stdio.h>

int main() {
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	printf("%d AND %d is %d\n", a, b, a&&b);
	printf("%d OR %d is %d\n", a, b, a||b);
	
	return 0;
}
