#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include<stdio.h>
#include<stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_ay(const int *array, size_t size, size_t min);
void print_array(const int *array, size_t size);
#endif

