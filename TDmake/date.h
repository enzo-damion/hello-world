#ifndef DATE
#define DATE

typedef struct _Date
{
    int day;
    int month;
    int year;
} Date;

Date *create_date(int day, int month, int year);
void print_date(Date *p);
int compare_date(Date *d1, Date *d2);
Date *duplicate_date(Date *d);

#endif