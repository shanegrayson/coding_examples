#include <stdio.h>

int my_strend(char *, char *);
int answer(char *, char *);

int main()
{
    char *x = "Hello there";
    char *y = "ere";
    
    printf("%d\n", my_strend(x, y));
    printf("%d\n", answer(x, y));
    
    return 0;
}

/* My attempt. My think was to iterate over the array
 * and then once I cam across a similar char I would
 * itereate and compare both string, and if pointer s
 * every get to the end, then they were the same ending
 * strings. Does not work.
 */
int my_strend(char *s, char *t)
{
    char *bs = s;
    char *bt = t;

    while (*s++ != '\0') 
        if (*s == *t) 
            while (*s++ == *bt++) 
                if (*s == '\0')
                    return 1;
    return 0;
}

int answer(char *s, char *t)
{
    char *bs = s;
    char *bt = t;

    for ( ; *s; s++)
        ;

    for ( ; *t; t++)
        ;

    for ( ; *s == *t; s--, t--)
        if (t == bt || s == bs)
            break;
    
    if (*s == *t && t == bt && *s != '\0')
        return 1;
    else
        return 0;
}
