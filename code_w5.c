#include <stdio.h>
#include <stdlib.h>

// find max of an array
int max_of_array(int * int_arr, size_t size)
{
    int max = int_arr[0];
    for (size_t i = 1; i < size; i++)
    {
        if (int_arr[i] > max)
        {
            max = int_arr[i];
        }
    }
    return max;
}

void reverse_array(int * int_arr, size_t size)
{
    int nloop = 0;
    for(size_t i = 0; i < size - 1 - i; i++)
    {
        int temp = int_arr[i];
        int_arr[i] = int_arr[size - 1 - i];
        int_arr[size - 1 - i] = temp;
        nloop++;
    }
    printf("nloop is %d\n", nloop);
}

int * max_of_2d_array(int ** int_arr, size_t num_row, size_t num_col, int axis)
{
    int * max_arr = (int *)malloc((axis == 0 ? num_col : num_row) * sizeof(int));
    if (axis == 0)
    {
        // find max in each column and print out
        for (size_t i = 0; i < num_col; i++)
        {
            int max = int_arr[0][i];
            for (size_t j = 1; j < num_row; j++)
            {
                if (int_arr[j][i] > max)
                {
                    max = int_arr[j][i];
                }
            }
            max_arr[i] = max;
        }
    }

    if (axis == 1)
    {
        // find max in each row and print out
        for (size_t i = 0; i < num_row; i++)
        {
            int max = int_arr[i][0];
            for (size_t j = 1; j < num_col; j++)
            {
                if (int_arr[i][j] > max)
                {
                    max = int_arr[i][j];
                }
            }
            max_arr[i] = max;
        }
    }
    return max_arr;
}

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int add(int a, int b)
{
    return a + b;
}

void func_try_modify_var(int* p_a)
{
    *p_a = 100;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    printf("a is %d, b is %d\n", a, b);
    func_try_modify_var(&a);
    printf("a is %d\n", a);
    
    // int *int_arr = (int *)malloc(5 * sizeof(int));

    // printf("size of unsigned long is %d\n", sizeof(size_t));

    // int_arr[0] = 1;
    // int_arr[1] = 2;
    // int_arr[2] = 3;
    // int_arr[3] = 4;
    // int_arr[4] = 5;

    // // int_arr = realloc(int_arr, 3 * sizeof(int));

    // // free(int_arr);

    // // int_arr[0]; // undefined behavior
    // printf("max of array is %d\n", max_of_array(int_arr, 5));
    // reverse_array(int_arr, 5);

    // // allocate 2d array of 3x4 and assign values
    // int n_rows = 3;
    // int n_cols = 4;

    // int **int_arr_2d = (int **)malloc(n_rows * sizeof(int *));
    // for (size_t i = 0; i < n_rows; i++)
    // {
    //     int_arr_2d[i] = (int *)malloc(n_cols * sizeof(int));

    //     for (size_t j = 0; j < n_cols; j++)
    //     {
    //         int_arr_2d[i][j] = i * n_cols + j;
    //     }
    // }

    // int *max_arr = max_of_2d_array(int_arr_2d, n_rows, n_cols, 0);
    // for (size_t i = 0; i < n_cols; i++)
    // {
    //     printf("max of column %d is %d\n", i, max_arr[i]);
    // }

    // int *max_arr2 = max_of_2d_array(int_arr_2d, n_rows, n_cols, 1);
    // for (size_t i = 0; i < n_rows; i++)
    // {
    //     printf("max of row %d is %d\n", i, max_arr2[i]);
    // }

    return 0;
}