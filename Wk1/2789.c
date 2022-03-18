#include <stdio.h>
int main(void)
{
    int n, Sn = 0;
    scanf("%d", &n);
    Sn = n;
    while (n--)
    {
        Sn += n;
    }
    printf("%d", Sn);
    return 0;
}