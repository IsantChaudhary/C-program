#include<stdio.h>

int main()
{
    float r,Area;
    float pi=3.14;
    printf("Enter radius\n");
    scanf("%f",&r);
    Area=pi*r*r;
    printf("Area of circle is %f\n",Area);
    float h,volume;
    printf("Enter height\n");
    scanf("%f",&h);
    volume=pi*r*r*h;
    printf("Volume of cylinder is %f",volume);
    return 0;
}