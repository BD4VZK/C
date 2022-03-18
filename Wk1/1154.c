#include <stdio.h>
void p1154();
int main(void)
{
    char str[128];
    scanf("%s", str);
    p1154(str);
    return 0;
}
void p1154(char ch[128])
{
    int i, j;
    for (i = 0; i < 128; i++)
    {
        if (ch[i] == '\0')
            break;
    }
    for (j = i - 1; j >= 0; j--)
        printf("%c", ch[j]);
}