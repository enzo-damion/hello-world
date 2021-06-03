#include <stdio.h>
#include "module.h"

int main()
{
        printf("addone(5) = %d\n", addone(5));
        printf("fibo(10) = %d\n", fibo(10));
        printf("fibo_recursion(10) = %d\n", fibo_recursion(0, 1, 10));
        int t[50];
        stock_pair(t, 50);
        print_tableau(t, 50);
        printf("'abcd' contient %d caractère\n", mylen("abcd"));
        int t1[] = {1, 2, 3, 4, 5, 6};
        int t2[] = {1, 1, 1, 1, 1, 1};
        int tres[6];
        sum_array(t1, t2, tres, 6);
        print_tableau(tres, 6);
}
