#include <stdio.h>
#include <math.h>
void deci_to_bin(int n, int * p, int * digit)
{
    int ct = *digit;
    while (n > 0)
    {
        *(p + ct) = n % 2;
        n = n / 2;
        ct++;
    }
    *digit = ct;
}
int base_convert(int k, int n)
{
    int arr[16], digit = 0;
    deci_to_bin(n, &arr[0], &digit);
    int i, sum = 0;
    for (i = 0; i < digit; i++)
        if (arr[i] == 1)
            sum += pow(k, i);
    return sum;
}
int main(void)
{
    int k, n;
    scanf("%d%d", &k, &n);
    printf("%d", base_convert(k, n));
    return 0;
}