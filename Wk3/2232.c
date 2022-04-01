#include <stdio.h>
int main(void)
{
    int n, x, i, j, ct = 0;
    scanf("%d%d", &n, &x);
    for (i = 1; i <= n; i++)
    {
        j = i;
        while(j)
        {
            if (j % 10 == x)
                ct++;
            j /= 10;
        }
    }
    printf("%d", ct);
    return 0;
}