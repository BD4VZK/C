int fib(int n)
{
    int i, fib[31] = {0, 1};
    for (i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    return fib[n];
}