#include <stdio.h>

#define MAX "64"
#define PRINT_VAR(var) printf("Variable '%s' has value: %d\n", #var, var)


int main() {

    enum Color { RED, GREEN, BLUE };

    PRINT_VAR(RED);
    PRINT_VAR(GREEN);
    PRINT_VAR(BLUE);

    // const int maxValue = 64; //maxValue is a constant integer variable

    // maxValue = 100; // This will cause a compilation error because maxValue is a constant and cannot be modified

    // char *maxString = "64";

    // printf("The maximum value is: %d\n", MAX);
    return 0;
}