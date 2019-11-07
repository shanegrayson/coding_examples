#include <stdio.h>
#include <ctype.h>

void itoa(int, char []);

int main()
{
    printf("I'm jsut done with this chapter.");
    return 0;
}

void itoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0)
        n = -n;

    i = 0;

    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0)
        s[i++] = '-';

    s[i] = '\0';

}
