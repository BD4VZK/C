#include <stdio.h>
int max(int a, int b)
{
    return a > b ? a : b;
}
int main(void)
{
    int row, i, j, m;
    scanf("%d", &row);
    int a[row][row];
    for (i = 0; i < row; i++)
        for (j = 0; j <= i; j++)
            scanf("%d", &a[i][j]);
    for (i = 1; i < row; i++)
        for (j = 0; j <= i; j++)
            a[i][j] += max(a[i - 1][j == 0 ? j : j - 1], a[i - 1][j == i ? j - 1 : j]);
    m = a[row - 1][0];
    for (j = 1; j < row; j++)
        if (m < a[row - 1][j])
            m = a[row - 1][j];
    printf("%d", m);
    return 0;
}