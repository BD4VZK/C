#include <stdio.h>
int min(int a, int b)
{
    return a < b ? a : b;
}
int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    int a[n][2], t[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i][0]);
    for (i = 0; i < n - 1; i++)
        scanf("%d", &a[i][1]);
    t[0] = a[0][0];
    t[1] = min(t[0] + a[1][0], a[0][1]);
    for (i = 2; i < n; i++)
        t[i] = min(t[i - 1] + a[i][0], t[i - 2] + a[i - 1][1]);
    printf("%d\n", t[n - 1]);
    return 0;
}