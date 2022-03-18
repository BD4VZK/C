#include <stdio.h>
#define PI 3.14
int main(void)
{
    float r, h = 0.0;
    scanf("%f %f", &r, &h);
    printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f\n", 2 * PI * r, PI * r * r, PI * r * r * 4, PI * r * r * r * 4 / 3, PI * r * r * h);
    return 0;
}