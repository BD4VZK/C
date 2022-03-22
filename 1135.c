#include <stdio.h>
int main(void)
{
    int alpha = 0, num = 0, bsp = 0, sym = 0;
    char ch;
    while (scanf("%c", &ch))
    {
        if (ch >= 'a' && ch <= 'z')
            alpha++;
        else if (ch >= '0' && ch <= '9')
            num++;
        else if (ch == ' ')
            bsp++;
        else if (ch == '\n')
            break;
        else
            sym++;
    }
    printf("%d %d %d %d", alpha, num, bsp, sym);
    return 0;
}