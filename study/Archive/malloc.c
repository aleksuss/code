#include <stdio.h>
#include <stdlib.h>

#define LOOPS 10000000

typedef struct {
	int* content;
	int len;
} MyList;

int listAppend(MyList* list, int value) {
	int len = list->len;
	int* temp = (int*) realloc(list->content, (len+1)*sizeof(int));

	if ( temp == NULL ) {
		return 0;
	}
	list->content = temp;
	list->len += 1;
	list->content[len] = value;
	return 1;
}

int listPop(MyList* list) {
	int last = list->len - 1;
	int value = list->content[last];
	int* temp = (int*) realloc(list->content, (last)*sizeof(int));

	if ( temp == NULL ) {
		return 0;
	}
	list->content = temp;
	list->len = last;
	return value;
}

int main() {
	MyList list;

	list.content = NULL;
	list.len = 0;

	for ( int i = 0; i < LOOPS; i++ ) {
		listAppend(&list, i);
	}

	for ( ; listPop(&list) != 0; ); 

	return 0;
}
