#include <stdio.h>
int main(void)
{
    int n, i, arr[100000] = {1, 3};
    scanf("%d", &n);
    for (i = 2; i < n; i++)
        arr[i] = (arr[i - 1] + 2 * arr[i - 2]) % 2333333;
    printf("%d", arr[n - 1]);
    return 0;
}