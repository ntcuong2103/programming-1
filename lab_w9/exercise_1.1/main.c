#include <stdio.h>
#include "sort.h"
#include "compare_func.h" 


int main()
{
    int N = 5;
    int arr[] = { 1, 4, 3, 7, 6 };

    bubble_sort(arr, N); // [1, 3, 4, 6, 7]
    bubble_sort_with_type(arr, N, less);
    // print array
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort_with_type(arr, N, greater);
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

#ifdef DEBUG
    printf("number of swap: %d\n", swap_counter);
#endif 

    return 0; // set break point
}

