#include <stdio.h>

void my_strcat(char *, char *);
int my_strlen(char *);

int main()
{
    char x[15] = "hello";
    char y[15] = " to s!";

    printf("x = %s\ny = %s\n", x, y);

    my_strcat(x, y);

    printf("x = %s\ny = %s\n", x, y);

    return 0;
}

void my_strcat(char *s, char *t)
{
    /* the reason is because the pointer is moving and stays after */
    while (*s)
        s++;
    while (*s++ = *t++)
        ;
}

int my_strlen(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
        n++;

    return n;
}
