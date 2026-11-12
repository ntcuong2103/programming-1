#include <stdio.h>

int main() {
    FILE *file = fopen("content.txt", "a"); 

    fprintf(file, "Hello, World!\n");
    fclose(file);
    return 0;
}