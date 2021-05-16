#include<stdlib.h>
#include<stdio.h>

int fact(int x)
{
    if (x < 2) return 1;
    return x * fact(x - 1);
}

int main(int agrc, char **argv)
{
    int x;
    scanf("%d", &x);

    int y = fact(x);
    printf("%d\n", y);

return EXIT_SUCCESS;
}