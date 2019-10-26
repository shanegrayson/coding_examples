#include <stdio.h>

#define MAXLINE 1000

int my_getline(char line[], int max);
int strindex(char source[], char searchfor[]);
int strrindex(char s[], char t[]);

char pattern[] = "ould";

/* Find lines in a mathcin pattern */
int main()
{
    char line[MAXLINE];
    int found = 0;
    int pos = 0;

    while (my_getline(line, MAXLINE) > 0)
        if ( (pos = strrindex(line, pattern)) >= 0) {
            printf("%s", line);
            printf("%d", pos);
            found++;
        }
    return found;
}

/* get line into s, return length */
int my_getline(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';

    return i;
}

/* retrun index of t in s, -1 else */
int strindex(char s[], char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }

    return -1;
}

/* returns the right most index of t in s or -1 */
int strrindex(char s[], char t[])
{
    int i, j, k, pos;

    pos = -1;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            pos = i;
    }

    return pos; 
}
