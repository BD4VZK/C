#include <stdio.h>
int main(void)
{
    unsigned int Ed, rn, rd;
    char slash;
    scanf("%u%c%u", &rn, &slash, &rd);
    printf("%u/%u = ", rn, rd);
    while (rn != 0)
    {
        if (rn == 3 && rd % 2 == 0)
        {
            printf ("1/%u + 1/%u", rd / 2, rd);
            break;
        }
        else
        {
            if (rd % rn == 0)
            {
                Ed=rd/rn;
                rn = 1;
            }
            else
                Ed = rd / rn + 1;
            if (rn == 1)
            {
                printf("1/%u", Ed);
                break;
            }
            else printf("1/%d + ", Ed);
            rn = rn * Ed - rd;
            rd = rd * Ed;
        }
    }
    return 0;
}