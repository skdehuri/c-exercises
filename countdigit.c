#include <stdio.h>
void main()
{
    int n, count = 0;
    printf("enter an integer");
    scanf("%d", &n);
    while (n != 0)
    {
        n /= 10;
        ++count;
    }
    printf("The number of digits: %d", count);
}