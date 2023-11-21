int call_tracker = 0;

int fibonacci(int N)
{
    call_tracker += 1;

    if (N == 0) return 0;
    if (N == 1) return 1;

    if (N > 1) return fibonacci(N - 1) + fibonacci(N - 2);
    return -1;
}

int main()
{
    int ans = fibonacci(10);
    return 0;
}