#include <stdio.h>
void main()
{
    char operator;
    double a, b;
    printf("enter an operator");
    scanf("%c", &operator);
    printf("enter a and b");
    scanf("%lf %lf", &a, &b);
    switch (operator)
    {
    case '+':
        printf("addition of a&b is %lf", a + b);
        break;
    case '-':
        printf("subtraction of a&b is %lf", a - b);
        break;
    case '*':
        printf("multiplication of a&b is %lf", a * b);
        break;
    case '/':
        printf("division of a&b is %lf", a / b);
        break;
    }
}