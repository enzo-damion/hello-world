#include <stdio.h>
#include <stdlib.h>
#include "person.h"

PersonList *insert_list(Person *person, PersonList *list)
{
    PersonList *res = (PersonList *)malloc(sizeof(PersonList));
    res->person = person;
    res->next = list;
    return res;
}

void print_personlist(PersonList *list)
{
    print_person(list->person);
    if (list->next != NULL)
    {
        print_list(list->next);
    }
}