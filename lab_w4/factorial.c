int factorial(int N)
{
    if (N == 0)
    {
        return 1;
    }
    else
    {
        return N * factorial(N - 1);
    }
}

int factorial_loop(int N)
{
    int result = 1;
    for (int i = 1; i <= N; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int N = 5;
    int ans = factorial_loop(N);
    return 0; // set break point here to check result
}