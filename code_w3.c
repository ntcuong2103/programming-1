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
    }
}



int main()
{
    // int counter = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i < 5) continue;
    //     counter += 1;
    // }
    // // counter from 5 -> 9
    // printf("counter = %d \n", counter);

    // create array 10x10 with value == index
    int arr[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = i * 10 + j;
        }
    }

    // loop through a column
    int col_index = 3;

    for (int i = 0; i < 10; i ++)
    {
        printf("arr[%d][%d] = %d \n", i, col_index, arr[i][col_index]);
    }


    return 0;
}
