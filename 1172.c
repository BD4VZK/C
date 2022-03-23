#include <stdio.h>
int main(void)
{
    int i, sum = 0;
    int month[13] = {[1] = 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    struct date_format
    {
        int a, m, d;
    } date;
    scanf("%d%d%d", &date.a, &date.m, &date.d);
    if (date.a % 4 == 0 && date.a % 100 != 0 || date.a % 400 == 0)
        month[2] = 29;
    for (i = 1; i < date.m; i++)
        sum += month[i];
    sum += date.d;
    printf("%d", sum);
    return 0;
}