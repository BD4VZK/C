#include <stdio.h>
#include <math.h>
int main(void)
{
    long long int r, x, y, i = 0;
    scanf("%lld", &r);
    for (y = -r; y <= r; y++)
    {
        x = sqrt(r * r - y * y);
        i += x;
    }
    printf("%lld", 2 * i + 2 * r + 1);
    return 0;
}