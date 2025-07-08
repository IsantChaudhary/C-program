#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("Enter value of c\n");
    scanf("%d",&c);
    printf("Enter value of d\n");
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    printf("a is the greatest number\n");
    if (b>a && b>c && b>d)
    printf("b is the greatest number\n");
    if (c>a && c>b && c>d)
    printf("c is the greatest number\n");
    if (d>a && d>b && d>c)
    printf("d is the greatest number\n");
    return 0;
}