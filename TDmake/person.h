#ifndef PERSON
#define PERSON
#include "date.h"

typedef struct _Person
{
    char *first_name;
    char *name;
    Date *birthday;
} Person;

Person *create_person(char *first_name, char *name, Date *birthday);
void print_person(Person *p);
Person *duplicate_person(Person *p);

#endif