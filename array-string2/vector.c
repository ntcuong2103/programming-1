// utilities function for vector/array operations
#include <stdio.h>

int insert(int *array, int size, int value, int position) {
    if (position < 0 || position > size) {
        return -1; // Invalid position
    }
    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = value;
    return 0; // Success
}