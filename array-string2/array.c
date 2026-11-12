#include <stdio.h>

int main() {
    int array_2[] = {1, 2, 3, 4, 5};
    int array_3[5];

    // array_3 = array_2;

    // print the memory address of the array
    printf("Memory address of array_2: %p\n", (void*)array_2);
    printf("Memory address of array_3: %p\n", (void*)array_3);


    return 0;
}