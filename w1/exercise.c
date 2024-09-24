#include <stdio.h>

// Write add function
// Write factorial function: f(n) = n*(n-1)*...*2*1
// Write Fibonacci function

int add(int a, int b)
{
    return a + b;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// fibonacci (n) = fibonacci(n-1) + fibonacci(n-2)
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int a = 5;
    int b = 10;
    int result = add(a, b);
    printf("Addition of %d and %d is %d\n", a, b, result);

    int n = 5;
    int fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);

    int fib = fibonacci(n);
    printf("Fibonacci of %d is %d\n", n, fib);

    return 0;
}