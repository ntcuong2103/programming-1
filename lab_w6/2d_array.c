#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>


int max(int a, int b)
{
    return (a >= b) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int sum(int a, int b)
{
    return a + b;
}

typedef int (*fp_type) (int, int);

// int (*func_ptr) (int , int) = max;

int reduce_using_fp(int** arr, int N, int M, fp_type func_ptr)
{
    assert(N > 0 && M > 0);

    int val = arr[0][0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            val = func_ptr(val, arr[i][j]);
        }
    }

    return val;
}


/**
 * Write reduce function where func is one of "max", "min", "sum"
 * Return func(array)
*/

int reduce(int** arr, int N, int M, const char* func)
{
    assert(N > 0 && M > 0);

    // if func is "max", return the maximum value of the array
    if (strcmp(func, "max") == 0)
    {
        int max_val = arr[0][0];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                max_val = max(max_val, arr[i][j]);
            }
        }
        return max_val;
    }

    // if func is "min", return the minimum value of the array
    if (strcmp(func, "min") == 0)
    {
        int min_val = arr[0][0];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                min_val = min(min_val, arr[i][j]);
            }
        }
        return min_val;
    }

    // if func is "sum", return the sum of the array
    if (strcmp(func, "sum") == 0)
    {
        int sum_val = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                sum_val = sum(sum_val, arr[i][j]);
            }
        }
        return sum_val;
    }

}

/**
 * Write reduce function by axis where func is one of "max", "min", "sum"
 * The return value should be 1-dimensional array
 * Return func(array, axis)
*/
int* reduce_with_axis(int** arr, int N, int M, const char* func, int axis)
{
    assert(N > 0 && M > 0);

    int* out;

    // allocate 1d array

    // return the reduced array
    return out;
}


/**
 * Write transpose function to transpose NxM array -> MxN array
*/
int** transpose(int** two_array, int N, int M)
{
    // allocate MxN array

    // return the transposed array
}

int main()
{
    // set random seed to current time
    srand(time(NULL));

    int N = 3, M = 4;
    // allocate NxM array
    int** two_array = malloc(N * sizeof(int*)); // allocate N x (int *)
    for (int i = 0; i < N; i++)
    {
        two_array[i] = malloc(M * sizeof(int)); // allocate M x (int)

        // set random value (0->9) for each element of array
        for (int j = 0; j < M; j++)
        {
            two_array[i][j] = rand() % 10;
            printf("array[%d][%d] = %d\n", i, j, two_array[i][j]);
        }
    }

    // int reduced = reduce(two_array, N, M, "max");

    int reduced_max = reduce_using_fp(two_array, N, M, &max );

    // printf("max = %d\n", max(1, 2));
    // int reduced_min = reduce_using_fp(two_array, N, M, min);
    // int reduced_sum = reduce_using_fp(two_array, N, M, sum);

    printf("reduced_max = %d\n", reduced_max);
    // printf("reduced_min = %d\n", reduced_min);
    // printf("reduced_sum = %d\n", reduced_sum);

    // int* reduced_axis = reduce_with_axis(two_array, N, M, "max", 0);

    // int** transposed_array = transpose(two_array, N, M);

    return 0;
}