#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum of %d natural numbers %d", n, sum);
    return 0;
}