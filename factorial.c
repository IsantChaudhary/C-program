#include<stdio.h>

int main()
{
    int i=1,factorial=1,n;
    printf("Enter number\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
    factorial*=i;
    }
    printf("The factorial is %d\n",factorial);
    return 0;
}