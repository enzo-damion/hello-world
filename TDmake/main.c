#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "person.h"
#include "list.h"

int main()
{
    Date *date_adrien = create_date(28, 05, 2002);
    Date *date_enzo = create_date(20, 04, 2000);
    Person *adrien = create_person("Adrien", "Peralta", date_adrien);
    Person *enzo = create_person("Enzo", "Damion", date_enzo);
    // print_person(adrien);
    // print_person(enzo);
    int test = compare_date(date_enzo, date_adrien);
    // printf("test = %d\n", test);
    Date *date_adrien_copy = duplicate_date(date_adrien);
    Person *adrien_copy = duplicate_person(adrien);
    // print_person(adrien_copy);
    List *empty = NULL;
    List *bds = insert_list(date_adrien, empty);
    List *bde = insert_list(date_enzo, bds);
    print_list(bde);
}