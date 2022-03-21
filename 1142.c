#include <stdio.h>
float division_of_1_by_2(int n)
{
    float ans = 1;
    while (n > 0)
    {
        ans /= 2;
        n--;
    }
    return ans;
}
int main(void)
{
    int m, n, i;
    float s = 0;
    scanf("%d%d", &m, &n);
    for (i = 1; i <= n; i++)
        s += division_of_1_by_2(i - 2);
    printf("%.2f %.2f", division_of_1_by_2(n) * m, s * m);
    return 0;
}