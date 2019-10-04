#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "char_vector.h"

int main(int argc, const char* argv[])
{
	char_vector v;
	if (char_vector_init(&v, 4) == 0) {
		printf("char_vector allocated\n");
	}

	for (int i = 0; i < 50; ++i) {
		char_vector_push_back(&v, 0x41);
		printf("%c", v.data[i]);
	}

	printf("\n");

	if (char_vector_destroy(&v) == 0) {
		printf("char_vector destroyed\n");
	}

	return 0;
}
