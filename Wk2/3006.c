#include <stdio.h>
int main(void)
{
    int n, i, arr[100000] = {1, 2, 3}, result;
    scanf("%d", &n);
    for (i = 3; i < n; i++)
        arr[i] = (arr[i - 1] + arr[i - 3]) % 2333333;
    printf("%d", arr[n - 1]);
    return 0;
}