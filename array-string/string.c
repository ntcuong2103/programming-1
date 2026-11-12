#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char array[] = "Hello World";
    char array2[] = "Hello Everyone";

    char *dest = (char *)malloc(strlen(array) + strlen(array2) + 1); // +1 for null terminator
    dest[0] = '\0'; // Initialize dest as an empty string
    
    // Concatenate the two arrays into dest
    strcat(dest, array);
    strcat(dest, array2);

    strcat(array, array2); // Concatenate array2 to array


    // char array3[] = "Hello World!";

    // char *ptr = array; // pointer to the first element of array
    // char *ptr2 = array2; // pointer to the first element of array2
    // char *ptr3 = array3; // pointer to the first element of array3

    // // Compare the two arrays using strcmp
    // int result = strcmp(array, array2);
    // // should return 0
    // int result3 = strcmp(array, array3);
    // // should return !0

    // int result2 = (array == array2); // not a valid comparison for content, compares addresses
    // // should return 0 because they are different arrays in memory


    return 0;
}