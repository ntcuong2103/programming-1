#include <dlfcn.h>
#include <stddef.h>
#include <stdio.h>

void* handle = NULL;
#define GetProcAddress dlsym

// declare function pointers

int (*greater) (int, int);
int (*less) (int, int);
void (*bubble_sort) (int*, int);

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
}

int main()
{
    int N = 5;
    int arr[] = { 1, 4, 3, 7, 6 };
    DllOpen("./sort_lib.so");

    bubble_sort(arr, N);
    return 0; // set break point
}