#include<stdio.h>

int main()
{
    float p,t,r,si;
    printf("Enter principle\n");
    scanf("%f",&p);
    printf("Enter rate\n");
    scanf("%f",&r);
    printf("Enter time\n");
    scanf("%f",&t);
    si=(p*t*r)/100;
    printf("simple interest is %f",si);
    return 0;
}