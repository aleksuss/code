#include <stdio.h>

typedef union {
	unsigned long long octo;
	unsigned char singles[8];
	unsigned int quads[2];
} Test;

int main() {
	Test a;

	a.octo = 20061986658402881;
	// scanf("%7s", a.singles);
	// printf("%llu\n", a.octo);
	// printf("%u\n", a.quads[0]);
	// printf("%s\n", a.singles);

	printf("%p\n", &a.octo);
	printf("%p\n", a.quads);
	printf("%p\n", a.singles);

	return 0;
}