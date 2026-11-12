#include <stdio.h>

int main() {
    // open file -> file descriptor
    FILE *file = fopen("content.txt", "r"); 
    
    char str[100];
    int num;

    while (1) {
        // read a string and an integer from the file
        if (fscanf(stdin, "%s %d", str, &num) != 2) {
            fprintf(stderr, "Error reading from keyboard\n");
            break; // exit loop if reading fails
        }

        // print the read string and number
        fprintf(stdout, "Read from keyboard: %s and %d\n", str, num);
    }

    fprintf(file, "End of file\n");

    // // read a string and an integer from the file
    // fscanf(file, "%s %d", str, &num);

    // // print the read string and number
    // printf("Read from file: %s and %d\n", str, num);

    return 0;
}