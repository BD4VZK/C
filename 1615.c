#include <stdio.h>
void multiplication(int x, int y)
{
    printf("%dx%d=%d", x, y, x * y);
}
int main(void)
{
    int i, j;
    for (j = 1; j < 10; j++)
        for (i = 1; i <= j; i++)
        {
            multiplication(i, j);
            if (i == j)
                printf("\n");
            else
                printf("\t");
        }
    return 0;
}