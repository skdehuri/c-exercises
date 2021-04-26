#include <stdio.h>
void ptrcpy(char *m, char *n)
{
    while (*m++ = *n++)
        ;
}
void main()
{
    char a[] = "swaraj";
    char *p = "swaraj";
    char *q;

    printf("%c\n", a[0]);
    printf("%c\n", *p);

    ptrcpy(q, p);
    printf(" q --> %c", *q);
}
