#include <stdio.h>
int main(void)
{
    int a[10];
    int i, j, k, m, n;
    for (i = 0; i < 9; i++)
        scanf("%d", &a[i]);
    scanf ("%d", &n);
    for (j = 8; j >= 1; j--)
        if ((a[j] >= n && a[j - 1] <= n) || (a[j] <= n && a[j - 1] >= n))
            break;
    for (k = 8; k >= j; k--)
        a[k + 1] = a[k];
    a[j] = n;
    for (m = 0; m < 10; m++)
        printf("%d\n", a[m]);
    return 0;
}