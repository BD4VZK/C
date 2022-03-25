#include <stdio.h>
#include <string.h>
int main(void)
{
    int bucket[32767][2], result[32767];
    int n, m, i, j, k, stick, arrow, count = 0;
    memset(bucket, 0, sizeof(bucket));
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &stick);
        bucket[stick][0] = 1;
    }
    scanf("%d", &m);
    for (j = 1; j <= m; j++)
    {
        scanf("%d", &arrow);
        if (bucket[arrow][0] == 1 && bucket[arrow][1] == 0)
        {
            bucket[arrow][1] = 1;
            result[count++] = arrow;
        }
    }
    for (k = 0; k < count - 1; k++)
        printf("%d ", result[k]);
    printf("%d", result[count - 1]);
    return 0;
}