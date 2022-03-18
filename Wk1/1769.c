#include <stdio.h>
int main(void)
{
    int i = 0;
    long int n;
    scanf("%ld", &n);
    b: if (n % 2 != 0 && n != 1)
    {
        n = 3 * n + 1;
        i++;
        a: while (n % 2 == 0 && n != 1)
        {
            n = n / 2;
            i++;
            goto b;
        }
    }
    else
    {   
        if (n != 1)
        goto a;
    }
    printf("%d", i);
    return 0;
}