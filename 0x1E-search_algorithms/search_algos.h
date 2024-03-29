#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binarySearch(int *array, size_t l, size_t r, int x);
int advanced_binary(int *array, size_t size, int value);
int binary_recursive(int *array, size_t left, size_t right, int value);

#endif
