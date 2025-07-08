#include<stdio.h>

int main()
{
    int n, a, isPrime = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("It is not a prime number\n");
        return 0;
    }

    for (a = 2; a <= n / 2; a++)
    {
        if (n % a == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("It is a prime number\n");
    else
        printf("It is not a prime number\n");

    return 0;
}
