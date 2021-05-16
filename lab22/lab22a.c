#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

uint64_t fact(uint64_t x);

int fn_a(int k, int n)
{
    return fact(n) / fact(n - k);
}

uint64_t fact(uint64_t x)
{
    uint64_t y = 1;

    for (uint64_t i = 2; i <= x; i++)
    y *= i;

    return y;
}

int main(int argc, char **_argv)
{
    int n0, n1, n2;
    int k0, k1, k2;

    scanf("%d %d", &k0, &n0);
    scanf("%d %d", &k1, &n1);
    scanf("%d %d", &k2, &n2);

    int x0 = fn_a(k0, n0);
    int x1 = fn_a(k1, n1);
    int x2 = fn_a(k2, n2);

    printf("%d %d\n", k0, x0);
    printf("%d %d\n", k1, x1);
    printf("%d %d\n", k2, x2);

    if (x0 > x1)
    {
        if (x0 > x2) fprintf("%d\n", k0);
        else printf("%d\n", k1);
    }
    else
    {
        if (x1 > x2) printf("%d\n", k1);
        else printf("%d\n", k2);
    }
    
    return EXIT_SUCCESS;
}