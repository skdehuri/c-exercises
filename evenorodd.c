#include <stdio.h>
void main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Number is even");
    else
        printf("Number is odd");
}