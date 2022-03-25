#include <stdio.h>
int main(void)
{
    int bin[1000];
    int n, i, ct = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        bin[ct++] = n % 2;
        n /= 2;
    }
    for (i = ct - 1; i >= 0; i--)
        printf("%d", bin[i]);
    return 0;
}