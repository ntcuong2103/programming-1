#include <stdio.h>

#define PI 3.14159

#define AREA(l, b) (l * b)
#define PERIMETER(l, b) (2 * (l + b))

#define CIRCLE_AREA(r) (PI * r * r) // --> 3.14159 * r * r

#define MAX(a, b) ((a >= b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define SUM(a, b) (a + b)

#define MAX3(a, b, c) (MAX(MAX(a, b), c)) // -->  ((a >= b) ? a : b) >= c ? ((a >= b) ? a : b) : c
#define MIN3(a, b, c) (MIN(MIN(a, b), c)) // -->  ((a < b) ? a : b) < c ? ((a < b) ? a : b) : c
#define SUM3(a, b, c) (SUM(SUM(a, b), c)) // -->  a + b + c




#ifdef _WIN32
#define CURRENT_SYSTEM "Windows"
#else
#define CURRENT_SYSTEM "Linux"
#endif


#define DEBUG_LEVEL 0

int func(int a, int b)
{
    #ifdef DEBUG
        printf("a = %d, b = %d\n", a, b);
        #if DEBUG_LEVEL > 1
            printf("a + b = %d\n", a + b);
        #endif
    #endif
    
    return a + b;
}

int max(int a, int b)
{
    #ifdef DEBUG
        printf("a = %d, b = %d\n", a, b);
        #if DEBUG_LEVEL > 1
            printf("max(a, b) = %d\n", a >= b ? a : b);
        #endif
    #endif
    
    return a >= b ? a : b;
}

// # test case 1
#ifdef TEST_CASE_1
int main()
{
    printf("Run test case 1\n");
    #ifdef DEBUG
        printf("%s in debug mode\n", CURRENT_SYSTEM);
    #else
        printf("%s in release mode\n", CURRENT_SYSTEM);
    #endif
}
#endif

#ifdef TEST_CASE_2
int main()
{
    printf("Run test case 2\n");
    #ifdef DEBUG
        printf("%s in debug mode\n", CURRENT_SYSTEM);
    #else
        printf("%s in release mode\n", CURRENT_SYSTEM);
    #endif
}
#endif
