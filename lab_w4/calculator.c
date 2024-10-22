#include <math.h>

int calculate(char* s[], int N)
{
    int ans = 0;
    int op;
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            ans = atoi(s[i]);
            continue;
        }

        if (i %2 == 0 && i != 0) 
        {
            switch (op)
            {
            case '+':
                ans += atoi(s[i]);
            case '-':
                ans -= atoi(s[i]);
            case '*':
                ans *= atoi(s[i]);
            case '/':
                ans /= atoi(s[i]);
            default:
                break;
            }
        }
        else
        {
            op = s[i][0];
        }
    }

    return 0;
}

int main()
{
    char* s[9] = { "25", "+", "3", "/", "10", "+", "12", "*", "3" };
    int ans = calculate(s, 9);
    return 0;
}