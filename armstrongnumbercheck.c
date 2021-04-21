#include <stdio.h>
#include <math.h>
void main()
{
    int number, originalNumber, remainder, result = 0, n = 0;
    printf("enter a number");
    scanf("%d", &number);
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        printf("%d", remainder);
        result += pow(remainder, n);
    }

    result == number ? printf("It is an Armstrong number") : printf("It is not an Armstrong number");
}