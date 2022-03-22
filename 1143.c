#include <stdio.h>
int wayback(int n)
{
    if (n == 1)
        return 1;
    else
        return 2 * (1 + wayback(n - 1));
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", wayback(n));
    return 0;
}