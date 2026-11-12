#include <stdio.h>
#include <string.h> // for strcmp function

int main() {

    char str1[100] = "";
    strcat(str1, "Hello, "); // concatenate "Hello, " to str1
    strcat(str1, "World!"); // concatenate "World!" to str1
    strcat(str1, " Welcome to C programming."); // concatenate another string to str1
    printf("After strncat: %s\n", str1);

    return 0;
}