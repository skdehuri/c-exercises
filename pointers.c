#include <stdio.h>
void main()
{
    int x = 7, *y = &x;
    printf("The value stored inside x: %d\n", x);
    printf("The address of the x: %u\n", &x);
    printf("pointed value %d\n", *y);
    printf("address of the pointed value %u\n", y);
    printf("address of the pointer %u\n", &y);
}