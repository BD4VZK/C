#include <stdio.h>
long long int fn = 1, Sn = 0;
int n, i, j = 1;
long long int p1137();
int main(void)
{
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
        Sn += p1137(j);
    printf("%lld", Sn);
    return 0;
}
long long int p1137(int x)
{
    fn = 1;
    for (i = x; i > 0; i--)
        fn *= i;
    return fn;
}