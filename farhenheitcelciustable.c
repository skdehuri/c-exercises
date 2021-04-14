#include <stdio.h>
void main()
{
    float farhenheit, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    farhenheit = lower;

    while (farhenheit <= upper)
    {
        celcius = 5.0 / 9.0 * (farhenheit - 32.0);
        printf("%3.0f\t%6.1f\n", farhenheit, celcius);
        farhenheit += step;
    }
}