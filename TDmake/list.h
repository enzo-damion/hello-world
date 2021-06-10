#ifndef LIST
#define LIST
#include "date.h"

typedef struct _List
{
    Date *date;
    List *list;
} List;

List *insert_list(Date *date, List *list);
void print_list(List *list);

#endif