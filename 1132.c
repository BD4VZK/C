#include <stdio.h>
int main(void)
{
    int i, j, k;
    char num[6];
    scanf("%s", num);
    for (i = 0; i < 6; i++)
    {
        if (num[i] == '\0')
        {
            printf("%d\n", i);
            break;
        }
    }
    for (j = 0; j < i - 1; j++)
        printf("%c ", num[j]);
    printf("%c\n", num[j]);
    for (k = j; k >= 0; k--)
    {
        printf("%c", num[k]);
    }
    return 0;
}