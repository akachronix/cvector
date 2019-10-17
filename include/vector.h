#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>
#include <stdbool.h>

typedef struct bool_vector {
	bool* data;
	size_t capacity;
	size_t size;
} bool_vector;

typedef struct char_vector {
	char* data;
	size_t capacity;
	size_t size;
} char_vector;

typedef struct int_vector {
	int* data;
	size_t capacity;
	size_t size;
} int_vector;

typedef struct unsigned_int_vector {
	unsigned int* data;
	size_t capacity;
	size_t size;
} unsigned_int_vector;

typedef struct float_vector {
	float* data;
	size_t capacity;
	size_t size;
} float_vector;

typedef struct double_vector {
	double* data;
	size_t capacity;
	size_t size;
} double_vector;

int bool_vector_init(bool_vector* v, size_t init_capacity);
int bool_vector_destroy(bool_vector* v);
int bool_vector_realloc(bool_vector* v);
int bool_vector_push_back(bool_vector* v, bool b);
int bool_vector_push_back_v(bool_vector* v, int args, ...);
int bool_vector_shrink_to_fit(bool_vector* v);

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

int unsigned_int_vector_init(unsigned_int_vector* v, size_t init_capacity);
int unsigned_int_vector_destroy(unsigned_int_vector* v);
int unsigned_int_vector_realloc(unsigned_int_vector* v);
int unsigned_int_vector_push_back(unsigned_int_vector* v, unsigned int n);
int unsigned_int_vector_push_back_v(unsigned_int_vector* v, int args, ...);
int unsigned_int_vector_shrink_to_fit(unsigned_int_vector* v);

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