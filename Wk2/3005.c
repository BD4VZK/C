#include <stdio.h>
int main(void)
{
    int a, b, i, f[100000] = {1, 2}, diff, result;
    scanf("%d%d", &a, &b);
    diff = b - a;
    if (diff == 1)
        result = 1;
    else if (diff == 2)
        result = 2;
    else
    {
        for (i = 3; i <= diff; i++)
            f[i - 1] = (f[i - 2] + f[i - 3]) % 2333333;
        result = f[diff - 1];
    }
    printf("%d", result);
    return 0;
}