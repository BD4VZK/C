#include <stdio.h>
int gcd(int x, int y)
{
    int i, j = x > y ? x : y;
    for (i = j; i > 0; i--)
        if (x % i == 0 && y % i == 0)
            return i;
    return 0;
}
int lcm(int x, int y)
{
    int i, j = x > y ? y : x;
    for (i = j; i <= x * y; i++)
        if (i % x == 0 && i % y == 0)
            return i;
    return 0;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d", gcd(a, b), lcm(a, b));
    return 0;
}