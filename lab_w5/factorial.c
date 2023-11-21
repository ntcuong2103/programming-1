int factorial(int N)
{
    if (N == 0) return 1;
    if (N == 1) return 1;

    if (N > 1) return N * factorial(N - 1);
    return -1;
}

int main()
{
    int N = 10;
    int ans = factorial(N);
    return 0; // set break point here to check result
}