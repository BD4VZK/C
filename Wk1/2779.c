#include <stdio.h>
main(void)
{
    int a, b = 0;
    float c = 0.0;
    scanf("%d %d", &a, &b);
    while (a % b != 0)
    {
        c = (float)a / (float)b;
        printf("%.2f", c);
        return 0;
    }
    printf("%d", a / b);
    return 0;
}