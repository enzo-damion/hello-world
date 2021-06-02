#include "module.h"

int addone(int x) {
        return x+1;
}

int fibo(int n) {
        int res;
        int temp;
        int a = 0;
        int b = 1;
        for (int i=2 ; i<=n ; i++) {
                temp = a;
                a = b;
                b = temp + a;
        }
        res = b;
        return res;
}

int fibo_recursion(int a, int b ,int n) {
        if (n<2) {
                return b;
        }
        else {
                return fibo_recursion(b ,a+b, n-1);
        }
}