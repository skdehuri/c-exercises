#include <stdio.h>
void main()
{
    int a[5];
    int *p;
    p = a;
    printf("a --> %d\n", a);
    printf("&a[0] --> %d\n", &a[0]);
    printf("&a[1] --> %d\n", &a[1]);
    printf("(a+1) --> %d\n", a + 1);

    printf("p --> %d\n", p);
    printf("p + 1 --> %d\n", p + 1);
    printf("&p[1] --> %d\n", &p[1]);
}