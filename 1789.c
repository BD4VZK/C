#include <stdio.h>
#include <string.h>
int main(void)
{
    char strA[100000], strB[100000];
    scanf("%s%s", strA, strB);
    int lenA = strlen(strA), lenB = strlen(strB);
    int a[lenA], b[lenB], ans[lenA > lenB ? lenA + 1 : lenB + 1];
    int flag = 0, i, j, k, p, q, minor = lenA < lenB ? lenA : lenB, major = lenA > lenB ? lenA : lenB;
    for (i = 0; i < lenA; i++)
        a[lenA - 1 - i] = strA[i] - '0';
    for (j = 0; j < lenB; j++)
        b[lenB - 1 - j] = strB[j] - '0';
    for (k = 0; k < minor; k++)
    {
        ans[k] = (a[k] + b[k] + flag) % 10;
        flag = (a[k] + b[k] + flag) / 10;
    }
    if (lenA == lenB && flag == 1)
        ans[major] = 1;
    else
        ans[major] = -1;
    for (p = minor; p < major; p++)
    {
        if (lenA > lenB)
            ans[p] = a[p] + (p == minor ? flag : 0);
        else
            ans[p] = b[p] + (p == minor ? flag : 0);
    }
    for (q = ans[major] == 1 ? major : major - 1; q >= 0; q--)
        printf("%d", ans[q]);
    return 0;
}