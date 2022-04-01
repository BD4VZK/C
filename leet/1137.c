int tribonacci(int n)
{
    int i, trib[38] = {0, 1, 1};
    for (i = 3; i <= n; i++)
        trib[i] = trib[i - 1] + trib[i - 2] + trib[i - 3];
    return trib[n];
}