#include <stdio.h>

int get_max_1d_array(int a[], int N)
{
    int max = a[0];
    for (int i = 1; i < N; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

const int num_row = 3;
const int num_col = 4;

const int num_row_a = 3;
const int num_col_a = 4;
const int num_row_b = 4;
const int num_col_b = 3;

int inner_product(int a[], int b[], int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += a[i] * b[i];
    }
    return sum;
}

void get_row(int a[num_row_a][num_col_a], int row, int result[num_col_a])
{
    for (int i = 0; i < num_col_a; i++)
    {
        result[i] = a[row][i];
    }
}

void get_col(int b[num_row_b][num_col_b], int col, int result[num_row_b])
{
    for (int i = 0; i < num_row_b; i++)
    {
        result[i] = b[i][col];
    }
}



int matrix_multiplication(int a[num_row_a][num_col_a], int b[num_row_b][num_col_b], int c[num_row_a][num_col_b])
{
    for (int i = 0; i < num_row_a; i++)
    {
        for (int j = 0; j < num_col_b; j++)
        {
            int row[num_col_a];
            int col[num_row_b];
            get_row(a, i, row);
            get_col(b, j, col);
            c[i][j] = inner_product(row, col, num_col_a);
        }
    }
}


int get_max_2d_array(int a[num_row][num_col], int axis)
{
    // your code here
    if (axis == 0)
    {
        // find max in each column and print out
        for (int i = 0; i < num_col; i++)
        {
            int max = a[0][i];
            for (int j = 1; j < num_row; j++)
            {
                if (a[j][i] > max)
                {
                    max = a[j][i];
                }
            }
            printf("Max in column %d is %d\n", i, max);
        }
    }

    if (axis == 1)
    {
        // find max in each row and print out
        for (int i = 0; i < num_row; i++)
        {
            int max = a[i][0];
            for (int j = 1; j < num_col; j++)
            {
                if (a[i][j] > max)
                {
                    max = a[i][j];
                }
            }
            printf("Max in row %d is %d\n", i, max);
        }
    }
}




int main()
{
    // create 2d array 3x4

    // int a[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}
    // };

    // get_max_2d_array(a, 0);

    // get_max_2d_array(a, 1);


    // const int N = 9;
    // int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int b[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    // int result = inner_product(a, b, N);

    // printf("Inner product of a and b is %d\n", result);

    // create two matrix a, b
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int b[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
    };

    int result[3][3];
    matrix_multiplication(a, b, result);

    return 0;
}
