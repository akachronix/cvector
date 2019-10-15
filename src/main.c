#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "vector.h"

int main(int argc, const char* argv[])
{
	char_vector v1;
	char_vector_init(&v1, 4);
	char_vector_push_back_v(&v1, 5, 0x41, 0x46, 0x42, 0x44, 0x43);
	
	int_vector v2;
	int_vector_init(&v2, 4);
	int_vector_push_back_v(&v2, 5, 2, 6, 7, 1, 15);
	
	float_vector v3;
	float_vector_init(&v3, 4);
	float_vector_push_back_v(&v3, 5, 0.5, 0.1, 1.6, 6.3, 3.2);
	
	double_vector v4;
	double_vector_init(&v4, 4);
	double_vector_push_back_v(&v4, 5, 1.55, 201.32, 693.242, 1235.2364, 10.7543);
	
	char_vector_destroy(&v1);
	int_vector_destroy(&v2);
	float_vector_destroy(&v3);
	double_vector_destroy(&v4);
}