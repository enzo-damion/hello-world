#include <stdio.h>
#include <stdlib.h>
#include "date.h"

int main()
{
    Date *d = create_date(26, 04, 2021);
    print_date(d);
    char *fn = "Adrien";
    char *n = "Peralta";
    Person *p = create_person(fn, n, d);
    print_person(p);
}