#include <stdio.h>
#include <stdlib.h>
#include "date.h"

void print_date(Date *p)
{
    printf("%d/%d/%d\n", p->day, p->month, p->year);
}

Date *create_date(int day, int month, int year)
{
    Date *res = (Date *)malloc(sizeof(Date));
    res->day = day;
    res->month = month;
    res->year = year;
    return res;
}

int compare_date(Date *d1, Date *d2)
{
    int res = (d1->day - d2->day) + (d1->month - d2->month) * 100 + (d1->year - d2->year) * 10000;
    return res;
}

Date *duplicate_date(Date *d)
{
    Date *res = (Date *)malloc(sizeof(Date));
    res->day = d->day;
    res->month = d->month;
    res->year = d->year;
    return res;
}