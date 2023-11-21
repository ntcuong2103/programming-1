#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <assert.h>


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

/**
 * Write reduce function where func is one of "max", "min", "sum"
 * Return func(array)
*/
int reduce(int** arr, int N, int M, const char* func)
{
    assert(N > 0 && M > 0);

    // your code here
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

    int reduced = reduce(two_array, N, M, "max");

    int* reduced_axis = reduce_with_axis(two_array, N, M, "max", 0);

    int** transposed_array = transpose(two_array, N, M);

    return 0;
}