#include <stdio.h>

int day_of_year(int, int, int);
void month_day(int, int, int *, int *);

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int main()
{
    printf("%d\n", day_of_year(1983, 01, 02));
    return 0;
}

int day_of_year(int year, int month, int day)
{
    int leap;
    char *p;

    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;

    p = daytab[leap];

    while (--month)
        day += *++p;
    return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;

    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;

    for (i = 1; yearday > daytab[leap][i]; i++)
        yearday -= daytab[leap][i];

    *pmonth = i;
    *pday = yearday;
}
