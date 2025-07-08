#include<stdio.h>

int main()
{
    int a,sum=0,n;
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of n\n");
    scanf("%d",&n);
    while (a<=n)
    {
    sum+=a;
    a++;
    }
    printf("the sum fo first ten natural numbers is %d\n",sum);
    return 0;
}