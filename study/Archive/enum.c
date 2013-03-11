#include <stdio.h>

typedef enum {
	martaber,
	winter,
	spring,
	summer,
	autumn
} Season;

int main() {
	Season season = spring;
	int days[10];

	days[spring] = 92;
	if ( season == spring ) {
		printf("It's green in spring! It lasts %d days\n", days[spring]);
	} else {
		printf("Waiting for spring...\n");
	}

	printf("%d\n", season);

	return 0;
}
