#include <stdio.h>
int main(void)
{
    int L, R, i, j, ct = 0;
    scanf("%d%d", &L, &R);
    for (i = L; i <= R; i++)
    {
        j = i;
        while (j)
        {
            if (j % 10 == 2)
                ct++;
            j /= 10;
        }
    }
    printf("%d", ct);
    return 0;
}