#include <stdio.h>
void main()
{
    int flag = 0, i, n;
    printf("enter a number");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    flag == 0 ? printf("it's a prime") : printf("It's not a prime");
}