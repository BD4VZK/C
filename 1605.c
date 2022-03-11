#include <stdio.h>
int main(void)
{
    int i, n, fn = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fn *= i;
    printf("%d", fn);
    return 0;
}