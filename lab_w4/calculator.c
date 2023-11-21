#include <math.h>

int calculate(char* s[], int N)
{
    // sample code for N == 3

    // int a = atoi(s[0]);
    // int b = atoi(s[2]);

    // switch (s[1][0])
    // {
    // case '+':
    //     return a + b;
    // case '-':
    //     return a - b;
    // case '*':
    //     return a * b;
    // case '/':
    //     return floor of (a/b);
    // default:

    //     break;
    // }

    return 0;
}

int main()
{
    char* s[9] = { "25", "+", "3", "/", "10", "+", "12", "*", "3" };
    int ans = calculate(s, 9);
    return 0;
}