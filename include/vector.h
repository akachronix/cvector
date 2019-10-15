#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>

typedef struct {
	char* data;
	size_t capacity;
	size_t size;
} char_vector;

typedef struct {
	int* data;
	size_t capacity;
	size_t size;
} int_vector;

typedef struct {
	float* data;
	size_t capacity;
	size_t size;
} float_vector;

typedef struct {
	double* data;
	size_t capacity;
	size_t size;
} double_vector;

int char_vector_init(char_vector* v, size_t init_capacity);
int char_vector_destroy(char_vector* v);
int char_vector_realloc(char_vector* v);
int char_vector_push_back(char_vector* v, char c);
int char_vector_push_back_v(char_vector* v, int args, ...);
int char_vector_shrink_to_fit(char_vector* v);

int int_vector_init(int_vector* v, size_t init_capacity);
int int_vector_destroy(int_vector* v);
int int_vector_realloc(int_vector* v);
int int_vector_push_back(int_vector* v, int n);
int int_vector_push_back_v(int_vector* v, int args, ...);
int int_vector_shrink_to_fit(int_vector* v);

int float_vector_init(float_vector* v, size_t init_capacity);
int float_vector_destroy(float_vector* v);
int float_vector_realloc(float_vector* v);
int float_vector_push_back(float_vector* v, float n);
int float_vector_push_back_v(float_vector* v, int args, ...);
int float_vector_shrink_to_fit(float_vector* v);

int double_vector_init(double_vector* v, size_t init_capacity);
int double_vector_destroy(double_vector* v);
int double_vector_realloc(double_vector* v);
int double_vector_push_back(double_vector* v, double n);
int double_vector_push_back_v(double_vector* v, int args, ...);
int double_vector_shrink_to_fit(double_vector* v);

#endif
