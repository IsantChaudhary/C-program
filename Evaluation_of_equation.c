#include<stdio.h>

int main()
{
    int x,y,k,z,result;
    printf("Enter value of x\n");
    scanf("%d",&x);
    printf("Enter value of y\n");
    scanf("%d",&y);
    printf("Enter value of z\n");
    scanf("%d",&z);
    printf("Enter value of k\n");
    scanf("%d",&k);
    result=3*x/y-z+k;
    printf("Its evaluation is %d",result);
    return 0;
}