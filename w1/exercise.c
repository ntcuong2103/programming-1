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
    if (n == 0 || n == 1)
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

int convert(char c)
{
    return c - '0';
}

int atoi_func(char s[], int size)
{
	int num = 0;
	for (int i = 0; i < size; i++)
    {
        num = 10 * num + convert(s[i]);
    }
    return num;
}


int main()
{
    int converted_value = atoi_func("12345", 5);
    printf("Converted value is %d\n", converted_value);
    
    char variable = 'a';
    

    float value = variable / 5; 		// 19: automatically cast
    value = (float)variable / 5; 	// 19.3999996: manually cast
    value = (float)(variable / 5); 	// 19		: manually cast


    // loop 0 to 10 using while loop
    int i = 0;
    while (i < 10)
    {
        printf("Value of i is %d\n", i);
        i++;
    }

    // loop 0 to 10 using for do while
    i = 0;
    do
    {
        printf("Value of i is %d\n", i);
        i++;
    } while (i < 10);

    // loop 0 to 10 using for loop
    int i, j;
    for (int i = 0, j = 0; i < 10 || j < 2; i++, j++)
    {
        printf("Value of i is %d, j is %d\n", i, j);
    }

    // nested loop i to 10 and j to 5
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Value of i is %d, j is %d\n", i, j);
        }
    }

    return 0;
}




// int main()
// {
//     int a = 5;
//     int b = 10;
//     int result = add(a, b);
//     printf("Addition of %d and %d is %d\n", a, b, result);

//     int n = 5;
//     int fact = factorial(n);
//     printf("Factorial of %d is %d\n", n, fact);

//     int fib = fibonacci(n);
//     printf("Fibonacci of %d is %d\n", n, fib);

//     return 0;
// }