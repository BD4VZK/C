#include <stdio.h>
int main(void)
{
    int n, i;
    float sum = 0, fraction[3][2] = {{2, 1}, {3, 2}, {5, 3}};;
    scanf("%d", &n);
    if (n > 3)
    {
        for (i = 0; i <= 2; i++)
            sum += fraction[i][0] / fraction[i][1];
        for (i = 3; i < n; i++)
        {
            fraction[0][0] = fraction[1][0];
            fraction[0][1] = fraction[1][1];
            fraction[1][0] = fraction[2][0];
            fraction[1][1] = fraction[2][1];
            fraction[2][0] = fraction[1][0] + fraction[0][0];
            fraction[2][1] = fraction[1][1] + fraction[0][1];
            sum += fraction[2][0] / fraction[2][1];
        }
    }
    else
        for (i = 0; i < n; i++)
            sum += fraction[i][0] / fraction[i][1];
    printf("%.2f", sum);
    return 0;
}