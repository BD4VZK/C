#include <stdio.h>
int main(void)
{
    int n, i, j, k, p, q, r, m = 0, max, rank = 1, par = 0;
    scanf("%d", &n);
    int a[n][2];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i][0]);
    max = a[0][0];
    for (j = 1; j < n; j++)
        if (a[j][0] >= max)
        {
            max = a[j][0];
            m = j;
        }
    a[m][1] = rank;
    for (k = max; k >= 0; k--)
    {
        for (p = 0; p < n; p++)
            if (a[p][0] == k)
                a[p][1] = rank;
        for (r = 0; r < n; r++)
            if (a[r][0] == k)
                par++;
        if (par != 0)
        {
            rank += par;
            par = 0;
        }
    }
    for (q = 0; q < n; q++)
        printf("%d %d\n", a[q][0], a[q][1]);
    return 0;
}