#include <stdio.h>
#include <stdarg.h>
int n, i, j, k;
void p1608(int x, int y)
{
    i = j = 1;
    printf("%*s", 2 * ( x - y ), "");
    for (i = 1, j = y; j - i > 0; i++)
        printf("%d ", i);
    for (j = y; j - 1 > 0; j--)
        printf("%d ", j);
    printf("%d\n", 1);
}
int main(void)
{
    scanf("%d", &n);
    for (k = 1; k <= n; k++)
        p1608(n, k);
    return 0;
}