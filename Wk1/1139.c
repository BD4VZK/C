#include <stdio.h>
int cube(int n) { return n * n * n; }
int main(void)
{
    int d1, d2, d3;
    for (d1 = 1; d1 < 10; d1++)
        for (d2 = 0; d2 < 10; d2++)
            for (d3 = 0; d3 < 10; d3++)
                if (cube(d1) + cube(d2) + cube(d3) == 100 * d1 + 10 * d2 + d3)
                    printf("%d%d%d\n", d1, d2, d3);
    return 0;
}