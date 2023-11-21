#include "compare_func.h"

#define DEBUG

#ifdef DEBUG
extern int swap_counter;
#endif 


void bubble_sort(int* arr, int N);
void bubble_sort_with_type(int* arr, int N, int (*compare_func)(int, int));
