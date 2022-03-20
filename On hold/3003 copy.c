#include <stdio.h>
long long int a[100000], s[100000], addition[100000];
struct node
{
    int beg, end, cnt;
} r[10000];
int main(void)
{
    int n, m, i, j, k, p, q, x, y, cmd = 0;
    long long int diff = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        s[i] = i == 0 ? a[i] : s[i - 1] + a[i];
    }
    scanf("%d", &m);
    for (j = 0; j < m; j++)
    {
        scanf("%d", &cmd);
        if (cmd == 1)
            scanf("%d%d%d", &r[j].beg, &r[j].end, &r[j].cnt);
        else
        {
            scanf("%d%d", &x, &y);
            for (p = x; p <= y; p++)
                for (k = 0; k <= m; k++)
                    if (r[k].beg <= p && p <= r[k].end)
                        addition[p - 1] += r[k].cnt;
                    for (q = x; q <= y; q++)
                        diff += addition[q - 1];
            printf("%lld\n", s[y - 1] - s[x - 2] + diff);
            diff = 0;
        }
    }
    return 0;
}