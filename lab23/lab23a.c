#include<stdlib.h>
#include<stdio.h>

int gcd(int a, int b)
{
    if (a < b)
    {
        int c = a;
        a = b;
        b = c;
    }

    int rem = a % b;

    if (rem != 0) return gcd(b, rem);
    return b;
}

int main(int argc, char **argv)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d %d\n", a, b);

    float f = (float) a / (float) b;
    printf("%.3f\n", f);

    int g = gcd(a, b);
    printf("%d\n", g);

    a /= g;
    b /= g;

    printf("%d %d\n", a, b);

    f = (float) a / (float) b;
    printf("%.3f\n", f);

    //f = (float) a / (float) b;
    //printf("%.3f\n", f);

    return EXIT_SUCCESS;
}