#include <stdio.h>
#include <stdarg.h>
void p1610(int x, int y)
{
    if (x >= y)
        printf ("%*s", x - y, "");
    else
        printf ("%*s", y - x, "");
    printf("*");
    if (y != 2 * x - 1 && y != 1)
    {   
        if (x >= y)
            printf ("%*s", 2 * y - 3, "");
        else
            printf ("%*s", 4 * x - 2 * y - 3, "");
        printf ("*");
    }
    printf("\n");
}
int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1, j = n; i <= 2 * j - 1; i++)
        p1610(n, i);
    return 0;
}