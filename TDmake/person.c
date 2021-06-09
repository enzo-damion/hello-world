#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "person.h"

void print_person(Person *p)
{
    printf("%d %d ", p->first_name, p->name);
    print_date(p->birthday);
}

Date *create_person(char *first_name, char *name, Date birthday)
{
    Person *res = (Person *)malloc(sizeof(Person));
    res->first_name = first_name;
    res->name = name;
    res->birthday = birthday;
    return res;
}