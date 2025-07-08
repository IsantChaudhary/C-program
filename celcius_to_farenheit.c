#include <stdio.h>

int main()
{
    float c, f;
    float a = (float)9 / 5;
    printf("Enter celcius:");
    scanf("%f", &c);
    f = ((c * a) + 32);
    printf(" %f", f);
    return 0;
}