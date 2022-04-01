int climbStairs(int n)
{
    int i, fib[45] = {1, 2};
    for (i = 2; i < n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    return fib[n - 1];
}