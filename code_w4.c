#include <stdio.h>
#include <stdlib.h>

// int arr[N];

// int * func_ret_static_array(int N)
// {
//     //  = {1, 2, 3, 4, 5};
//     for (int i = 0; i < N; i++)
//     {
//         arr[i] = i;
//     }
    
//     return &(arr[0]);
// }

int *allocate_dynamic_array(int N)
{
    int *arr = (void*)(int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        arr[i] = i;
    }
    return arr;
}

int main()
{
    int a = 100;
    
    int * a_ptr;
    a_ptr = &a;

    

    printf("a_ptr is %p\n", a_ptr);

    printf("value of a: %d\n", *a_ptr);

    // *a_ptr = 99;

    // int arr[5] = {1, 2, 3, 4, 5};

    // int arr2[5] = {5, 4, 3, 2, 1};
    // // arr = arr2; not allowed
    // int *arr_ptr = arr;
    // arr_ptr = arr2;

    // // indexing
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("arr_ptr[%d] is %d\n", i, arr_ptr[i]);
    // }

    // printf("arr_ptr is %p\n", arr_ptr);

    // printf("arr_ptr+1 is %p\n", arr_ptr+1);

    // printf("arr_ptr+3 is %p\n", arr_ptr+3);

    // // // use dereference operator
    // // for (int i = 0; i < 5; i++)
    // // {
    // //     printf("arr_ptr[%d] is %d\n", i, *(&(arr_ptr[i])));
    // // }

    // int *arr_ptr2 = func_ret_static_array(100);
    // int *arr_ptr3 = func_ret_static_array(200);

    return 0;
}

