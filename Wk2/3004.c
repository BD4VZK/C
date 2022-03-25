#include <stdio.h>
int main(void)
{
    int n, i, stairs, f[100000] = {1, 1, 2};
    scanf("%d", &n);
    stairs = n - 1;
    for (i = 3; i <= stairs; i++)
        f[i] = (f[i - 1] + f[i - 2]) % 2333333;
    printf("%d", f[stairs]);
    return 0;
}