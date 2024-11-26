#include <dlfcn.h>
#include <stddef.h>
#include <stdio.h>

void* handle = NULL;
#define GetProcAddress dlsym

// declare function pointers

// extern int greater(int a, int b);
// extern int less(int a, int b);
// extern void bubble_sort(int* arr, int N);
int (*greater) (int, int);
int (*less) (int, int);
void (*bubble_sort) (int*, int);
// extern void bubble_sort_with_type(int* arr, int N, int (*compare_func)(int, int));
void (*bubble_sort_with_type) (int*, int, int (*)(int, int));

void DllOpen(const char* lib_name)
{
    handle = dlopen(lib_name, RTLD_LAZY);

    if (!handle)
    {
        printf("Could not load library: %s\n", lib_name);
        return;
    }

    greater = (int (*)(int, int)) GetProcAddress(handle, "greater");
    less = (int (*)(int, int)) GetProcAddress(handle, "less");
    bubble_sort = (void(*)(int*, int)) GetProcAddress(handle, "bubble_sort");
    bubble_sort_with_type =  GetProcAddress(handle, "bubble_sort_with_type");
}

int main()
{
    int N = 5;
    int arr[] = { 1, 4, 3, 7, 6 };
    DllOpen("./sort_lib.so");

    bubble_sort_with_type(arr, N, greater);
    // print array
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0; // set break point
}