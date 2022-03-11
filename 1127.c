#include <stdio.h>
#define PI 3.14
main(void)
{
    float r, h, C1, Sa, Sb, Va, Vb = 0.0;
    scanf("%f %f", &r, &h);
    printf("C1=%.2f\n
            Sa=%.2f\n
            Sb=%.2f\n
            Va=%.2f\n
            Vb=%.2f\n"
            2 * PI * r, 
            PI * r * r, 
            PI * r * r * 4, 
            PI * r * r * r * 4 / 3, 
            PI * r * r * h
            );
    return 0;
}