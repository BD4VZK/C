#include <stdio.h>
#include <math.h>
long int p1136(int x)
{
    int i;
    long int an = 0;
    for (i = 0; i < x; i++)
        an += 2 * pow(10, i);
    return an;
}
int main(void)
{
    int n, j;
    long int Sn = 0;
    scanf("%d", &n);
    for (j = n; j > 0; j--)
        Sn += p1136(j);
    printf("%ld", Sn);
    return 0;
}