#include <stdio.h>
#include <math.h>
int isPrime(int p)
{
    int mid = sqrt(p);
    int i;
    for(i = 2; i <= mid; i++, mid--)
        if(p % i == 0 || p % mid == 0)
            return 0;
    return 1;
}
int prime_factorization(int n)
{
    int i, prime = 2, sum = 0;
    while(n > 0)
    {
        if (isPrime(prime) == 1 && n % prime == 0)
        {
            i = prime;
            while (i > 0)
            {
                sum += i % 10;
                i /= 10;
            }
            n /= prime;
        }
        if (n == 1)
            break;
        if (n % prime != 0)
            prime++;
    }
    return sum;
}
int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    while (1)
        if (sum_of_digits(n) == prime_factorization(n) && isPrime(n) == 0)
        {
            printf("%d\n", n);
            break;
        }
        else
            n++;
    return 0;
}