#include <stdio.h>
int head(int x)
{
    int i, sum = 0;
    for (i = 1; i < x; i++)
        if (x % i == 0)
            sum += i;
    if (sum == x)
        return sum;
    else
        return 0;
}
void factor(int x)
{
    int j;
    if (head(x) != 0)
    {
        printf ("%d its factors are ", x);
        for (j = 1; j < x / 2; j++)
            if (x % j == 0)
                printf("%d ", j);
        printf("%d \n", x / 2);
    }
}
int main(void)
{
    int n, k;
    scanf("%d", &n);
    for (k = 2; k <= n; k++)
        factor(k);
    return 0;
}