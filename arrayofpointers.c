#include <stdio.h>
void main()
{
    char *names[] = {"foo", "bar", "baz"};

    printf("%s\n", *(names + 1));
    printf("%s\n", *names + 1);
    printf("%s\n", (*(names + 2) + 2));
}