#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;


int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getch();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("Ungetch: Too many chars.\n");
    else
        buf[bufp++] = c;
}
