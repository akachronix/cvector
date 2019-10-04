#include "char_vector.h"

#include <stdlib.h>
#include <stddef.h>

int char_vector_init(char_vector* v, size_t init_capacity)
{
	v->data = (char*)malloc(sizeof(char) * init_capacity);
	if (v->data == NULL)
		return -1;
	
	v->capacity = init_capacity;
	v->size = 0;

	return 0;
}


int char_vector_destroy(char_vector* v)
{
	if (v->data == NULL)
		return -1;
	
	free(v->data);
	v->capacity = 0;
	v->size = 0;

	return 0;
}

int char_vector_realloc(char_vector* v)
{
	v->capacity <<= 2;

	char* realloc_data = (char*)realloc(v->data, v->capacity);
	if (realloc_data == NULL)
		return -1;
	
	v->data = realloc_data;
	
	return 0;
}

int char_vector_push_back(char_vector* v, char c)
{
	if (v->size == v->capacity)
		char_vector_realloc(v);

	v->data[v->size] = c;
	++v->size;

	return 0;
}

int char_vector_shrink_to_fit(char_vector* v)
{
	if (v->capacity != v->size) {
		v->capacity = v->size;
		char* realloc_data = (char*)realloc(v->data, v->capacity);
		if (realloc_data == NULL)
			return -1;
		
		v->data = realloc_data;
	}
	
	return 0;
}