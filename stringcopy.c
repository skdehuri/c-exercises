
// strcpy_custom
#include <stdio.h>

char *strcpy_custom(char *s, char *t)
{
    int i = 0;
    while ((*s = *t) != '\0')
    {
        s++;
        t++;
    }

    return s;
}

void main()
{
    char a[] = "temp";
    char b[] = "helloworld";

    strcpy_custom(a, b);

    printf("%s\n", a);
}
