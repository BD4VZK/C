#include <stdio.h>
int main(void)
{
    int a[1000][1000];
    int n, i, j, k, m, x, y, step = 1;
    int flag = 0;
    scanf("%d", &n);
    i = n * n;
    if (n % 2 != 0)
        x = y = ((n + 1) / 2) - 1;
    else
    {
        x = (n / 2) - 1;
        y = (n / 2) + 1 - 1;
    }
    a[x][y] = i;
    if (n % 2 == 0)
    {
        flag = 1;
        goto rightwards;
    }
    else
        goto leftwards;
    rightwards: 
    for (j = 1; j <= step; j++)
    {
        i--;
        a[x + j][y] = i;
    }
    int x1 = x + j - 1;
    for (j = 1; j <= step; j++)
    {
        i--;
        a[x1][y - j] = i;
    }
    int y1 = y - j + 1;
    step++;
    leftwards:
    while (flag == 0)
    {
        x1 = x;
        y1 = y;
        flag = 1;
    }
    for (j = 1; j <= step; j++)
    {
        i--;
        a[x1 - j][y1] = i;
        if (i == 1)
            goto end;
    }
    int x2 = x1 - j + 1;
    for (j = 1; j <= step; j++)
    {
        i--;
        a[x2][y1 + j] = i;
    }
    step++;
    int y2 = y1 + j - 1;
    y = y2;
    x = x2;
    goto rightwards;
    end: 
    for (m = 0; m < n; m++)
    {
        for (k = 0; k < n - 1; k++)
            printf("%d ", a[k][m]);
        printf("%d\n", a[n - 1][m]);
    }
    return 0;
} 