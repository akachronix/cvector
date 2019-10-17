# cvector 

### Documentation (WIP)
- ```typedef struct bool_vector```
	- ```int bool_vector_init(bool_vector* v, size_t init_capacity)```
	- ```int bool_vector_destroy(bool_vector* v)```
	- ```int bool_vector_realloc(bool_vector* v)```
	- ```int bool_vector_push_back(bool_vector* v, bool b)```
	- ```int bool_vector_push_back_v(bool_vector* v, int args, ...)```
	- ```int bool_vector_shrink_to_fit(bool_vector* v)```