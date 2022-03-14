#include <stdio.h>
int main(void)
{
    int n, i, j, k, min, max;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = max = a[0];
    for (j = 1; j < n; j++)
    {
        if (a[j] < min)
            min = a[j];
        if (a[j] > max)
            max = a[j];
    }
    printf("%d %d", max, min);
    return 0;
}