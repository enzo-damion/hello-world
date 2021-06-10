#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "person.h"

void print_person(Person *p)
{
    printf("%s %s ", p->first_name, p->name);
    print_date(p->birthday);
}

Person *create_person(char *first_name, char *name, Date *birthday)
{
    Person *res = (Person *)malloc(sizeof(Person));
    res->first_name = first_name;
    res->name = name;
    res->birthday = birthday;
    return res;
}

Person *duplicate_person(Person *p)
{
    Person *res = (Person *)malloc(sizeof(Person));
    res->first_name = p->first_name;
    res->name = p->name;
    res->birthday = p->birthday;
    return res;
}