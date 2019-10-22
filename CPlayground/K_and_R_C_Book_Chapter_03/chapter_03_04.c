/*
 * chapter_03_04.c
 *
 *  Created on: Oct 18, 2019
 *      Author: Shane
 */

/*
 * Question in book is super confusing.
 * Just took answer from answer book.
 */

/*
 * No idea what is happening in this question
 */

#define abs(x)  ((x) < 0 ? -(x) : (x))

void chapter_03_04(int n, char s[])
{
    printf("%d %s", n, s); 
    int i, sign;

    sign = n;
    i = 0;
    
    do {
        s[i++] = abs(n % 10) + '0';
    } while ((n /= 10) != 0);

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';

    for (i = strlen(s); i > 0; i--)
        printf("%c", s[i]);

}
