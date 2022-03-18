#include <stdio.h>
int main(void)
{
    int a[10], i, j, k, p, min;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < 10; j++)
        for (k = 0; k < 9; k++)
            if (a[k] <= a[k + 1])
            {
                min = a[k];
                a[k] = a[k + 1];
                a[k + 1] = min;
            }
    for (p = 9; p >= 0; p--)
        printf("%d\n", a[p]);
    return 0;
}