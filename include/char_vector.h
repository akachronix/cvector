#ifndef CHAR_VECTOR_H
#define CHAR_VECTOR_H

#include <stddef.h>

typedef struct {
	char* data;
	size_t capacity;
	size_t size;
} char_vector;

int char_vector_init(char_vector* v, size_t init_capacity);
int char_vector_destroy(char_vector* v);
int char_vector_realloc(char_vector* v);
int char_vector_push_back(char_vector* v, char c);
int char_vector_shrink_to_fit(char_vector* v);

#endif
