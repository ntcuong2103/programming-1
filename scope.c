#include <stdio.h>

// global variable
int globalVar = 10;

int modifyGlobalVar() {
    globalVar = 15;
    // localVar = 20; // This will cause a compilation error because localVar is not declared in this scope

    return globalVar;
}

int main() {

    int a = 100;
    {
        // inner scope
        int a = 200; // This 'a' shadows the outer 'a'
        printf("Inner variable 'a': %d\n", a);
    }

    printf("Outer variable 'a': %d\n", a);

    return 0;
}