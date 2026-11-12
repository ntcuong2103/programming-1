#include <stdio.h>
#include <stdlib.h>

int compareAscending(const void *a, const void *b) {
    // Cast the void pointers to integer pointers and dereference them
    int int_a = *((int *)a);
    int int_b = *((int *)b);

    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
    
    // Shortcut: return (int_a - int_b); 
    // (Note: subtraction shortcut can cause overflow for very large numbers)
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int array2[5];

    for (int i = 0; i < 5; i++) {
        array2[4-i] = arr[i];
    }

    // print the elements of array2
    for (int i = 0; i < 5; i++) {
        printf("%d ", array2[i]);
    }

    qsort(array2, 5, sizeof(int), compareAscending);

    for (int i = 0; i < 5; i++) {
        printf("%d ", array2[i]);
    }

    // get the size of the array
    int size = sizeof(array2) / sizeof(array2[0]);
    printf("The size of the array is: %d\n", size);

    return 0;
}