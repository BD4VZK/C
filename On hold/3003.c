#include <stdio.h>
int a[100000], s[100000], delta[100000], addition[100000];
int main(void)
{
    int n, m, i, j, k, p, c, x, y, cmd = 0;
    long long int diff = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s[i] = i == 0 ? a[i] : s[i - 1] + a[i];
    }
    scanf("%d", &m);
    for (j = 1; j <= m; j++)
    {
        scanf("%d", &cmd);
        if (cmd == 1)
        {
            scanf("%d%d%d", &x, &y, &c);
            delta[x - 1] += c;
            delta[y] -= c;
            for (p = x - 1; p < y; p++)
                addition[k] = addition[k - 1] + delta[k];
        }
        else
        {
            scanf("%d%d", &x, &y);
            for (k = x - 1; k < y; k++)
                diff += addition[k];
            printf("%lld\n", s[y - 1] - s[x - 2] + diff);
            diff = 0;
        }
    }
    return 0;
}