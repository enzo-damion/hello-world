#include "module.h"
#include <stdio.h>

int addone(int x)
{
        return x + 1;
}

int fibo(int n)
{
        int a = 0;
        int b = 1;
        for (int i = 2; i <= n; i++)
        {
                int temp = a;
                a = b;
                b = temp + a;
        }
        int res = b;
        return res;
}

int fibo_recursion(int a, int b, int n)
{
        if (n < 2)
        {
                return b;
        }
        else
        {
                return fibo_recursion(b, a + b, n - 1);
        }
}

int print_tableau(int t[], int taille)
{
        printf("[ ");
        for (int i = 0; i < taille; i++)
        {
                printf("%d ", t[i]);
        }
        printf("]\n");
}

int stock_pair(int t[], int taille)
{
        for (int i = 0; i < taille; i++)
        {
                t[i] = 2 * i;
        }
}

int mylen(char s[])
{
        int compteur = 0;
        while (s[compteur] != 0)
        {
                compteur++;
        }
        return compteur;
}

int sum_array(int t1[], int t2[], int tres[], int taille)
{
        for (int i = 0; i < taille; i++)
        {
                tres[i] = t1[i] + t2[i];
        }
}

int mylen_etoile(char *s)
{
        int test = 1;
        int compteur = 0;
        while (test != '\0')
        {
                compteur++;
                test = *(s + compteur);
        }
        return compteur;
}