#include <stdio.h>
void base_convert(int deci, int base)
{
    const char *digits = "0123456789ABCDEFGHIJ";
    char ans[32];
    int i, j, ct = 0, orig = deci, rem, quot;
    while (deci != 0)
    {
        rem = deci % base;
        quot = deci / base;
        if (rem < 0)
        {
            rem -= base;
            quot += 1;
        }
        ans[ct++] = digits[rem];
        deci = quot;
    }
    printf("%d=", orig);
    if (orig == 0)
        printf("0");
    for (j = ct - 1; j >= 0; j--)
        printf("%c", ans[j]);
    printf("(base %d)\n", base);
}
int main(void)
{
    int n, r;
    while (scanf("%d%d", &n, &r) != EOF)
        base_convert(n, r);
    return 0;
}