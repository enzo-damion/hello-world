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