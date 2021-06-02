#include<stdio.h>
#include "module.h"

int main() {
        printf("addone(5) = %d\n", addone(5));
        printf("fibo(10) = %d\n", fibo(10));
        printf("fibo_recursion(10) = %d\n", fibo_recursion(0,1,10));
}
