#include <stdio.h>

int main(){
    char str[100];
    // read the file with fgets
    FILE *file = fopen("content.txt", "r");

    
    // while (fgets(str, sizeof(str), file) != NULL) {
    //     printf("%s\n", str);
    // }

    // getline instead
    size_t len = 50;
    char *buffer = str;
    while (getline(&buffer, &len, file) != -1) {
        int num;
        char str[100];
        sscanf(buffer, "%s %d", str, &num);
        char output[100];
        sprintf(output, "Read from file: %s and %d\n", str, num);
        printf("%s", output);
    }

    fclose(file);
    return 0;
}