#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "list.h"

List *insert_list(Date *date, List *list)
{
    List *res = (List *)malloc(sizeof(List));
    res->date = date;
    res->list = list;
    return res;
}

void print_list(List *list)
{
    print_date(list->date);
    if (list->list != NULL)
    {
        print_list(list->list);
    }
}