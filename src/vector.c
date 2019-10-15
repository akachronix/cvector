#include "vector.h"

#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

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
		if (char_vector_realloc(v) != 0)
			return -1;

	v->data[v->size] = c;
	++v->size;

	return 0;
}

int char_vector_push_back_v(char_vector* v, int args, ...)
{	
	va_list vl;
	va_start(vl, args);
	for (int i = 0; i < args; ++i) {
		if (v->size == v->capacity)
			if (char_vector_realloc(v) != 0)
				return -1;
			
		v->data[v->size] = va_arg(vl, int);
		++v->size;
	}
	
	va_end(vl);
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

int int_vector_init(int_vector* v, size_t init_capacity)
{
	v->data = (int*)malloc(sizeof(int) * init_capacity);
	if (v->data == NULL)
		return -1;
	
	v->capacity = init_capacity;
	v->size = 0;

	return 0;
}

int int_vector_destroy(int_vector* v)
{
	if (v->data == NULL)
		return -1;
	
	free(v->data);
	v->capacity = 0;
	v->size = 0;

	return 0;
}

int int_vector_realloc(int_vector* v)
{
	v->capacity <<= 2;

	int* realloc_data = (int*)realloc(v->data, v->capacity);
	if (realloc_data == NULL)
		return -1;
	
	v->data = realloc_data;
	
	return 0;
}

int int_vector_push_back(int_vector* v, int n)
{
	if (v->size == v->capacity)
		if (int_vector_realloc(v) != 0)
			return -1;

	v->data[v->size] = n;
	++v->size;

	return 0;
}

int int_vector_push_back_v(int_vector* v, int args, ...)
{
	va_list vl;
	va_start(vl, args);
	for (int i = 0; i < args; ++i) {
		if (v->size == v->capacity)
			if (int_vector_realloc(v) != 0)
				return -1;
			
		v->data[v->size] = va_arg(vl, int);
		++v->size;
	}
	
	va_end(vl);
	return 0;
}

int int_vector_shrink_to_fit(int_vector* v)
{
	if (v->capacity != v->size) {
		v->capacity = v->size;
		int* realloc_data = (int*)realloc(v->data, v->capacity);
		if (realloc_data == NULL)
			return -1;
		
		v->data = realloc_data;
	}
	
	return 0;
}

int float_vector_init(float_vector* v, size_t init_capacity)
{
	v->data = (float*)malloc(sizeof(float) * init_capacity);
	if (v->data == NULL)
		return -1;
	
	v->capacity = init_capacity;
	v->size = 0;

	return 0;
}

int float_vector_destroy(float_vector* v)
{
	if (v->data == NULL)
		return -1;
	
	free(v->data);
	v->capacity = 0;
	v->size = 0;

	return 0;
}

int float_vector_realloc(float_vector* v)
{
	v->capacity <<= 2;

	float* realloc_data = (float*)realloc(v->data, v->capacity);
	if (realloc_data == NULL)
		return -1;
	
	v->data = realloc_data;
	
	return 0;
}

int float_vector_push_back(float_vector* v, int n)
{
	if (v->size == v->capacity)
		if (float_vector_realloc(v) != 0)
			return -1;

	v->data[v->size] = n;
	++v->size;

	return 0;
}

int float_vector_push_back_v(float_vector* v, int args, ...)
{
	va_list vl;
	va_start(vl, args);
	for (int i = 0; i < args; ++i) {
		if (v->size == v->capacity)
			if (float_vector_realloc(v) != 0)
				return -1;
			
		v->data[v->size] = va_arg(vl, double);
		++v->size;
	}
	
	va_end(vl);
	return 0;
}

int float_vector_shrink_to_fit(float_vector* v)
{
	if (v->capacity != v->size) {
		v->capacity = v->size;
		float* realloc_data = (float*)realloc(v->data, v->capacity);
		if (realloc_data == NULL)
			return -1;
		
		v->data = realloc_data;
	}
	
	return 0;
}

int double_vector_init(double_vector* v, size_t init_capacity)
{
	v->data = (double*)malloc(sizeof(double) * init_capacity);
	if (v->data == NULL)
		return -1;
	
	v->capacity = init_capacity;
	v->size = 0;

	return 0;
}

int double_vector_destroy(double_vector* v)
{
	if (v->data == NULL)
		return -1;
	
	free(v->data);
	v->capacity = 0;
	v->size = 0;

	return 0;
}

int double_vector_realloc(double_vector* v)
{
	v->capacity <<= 2;

	double* realloc_data = (double*)realloc(v->data, v->capacity);
	if (realloc_data == NULL)
		return -1;
	
	v->data = realloc_data;
	
	return 0;
}

int double_vector_push_back(double_vector* v, int n)
{
	if (v->size == v->capacity)
		if (double_vector_realloc(v) != 0)
			return -1;

	v->data[v->size] = n;
	++v->size;

	return 0;
}

int double_vector_push_back_v(double_vector* v, int args, ...)
{
	va_list vl;
	va_start(vl, args);
	for (int i = 0; i < args; ++i) {
		if (v->size == v->capacity)
			if (double_vector_realloc(v) != 0)
				return -1;
			
		v->data[v->size] = va_arg(vl, double);
		++v->size;
	}
	
	va_end(vl);
	return 0;
}

int double_vector_shrink_to_fit(double_vector* v)
{
	if (v->capacity != v->size) {
		v->capacity = v->size;
		double* realloc_data = (double*)realloc(v->data, v->capacity);
		if (realloc_data == NULL)
			return -1;
		
		v->data = realloc_data;
	}
	
	return 0;
}