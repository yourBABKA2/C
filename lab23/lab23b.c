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

int main()
{
    int a0, b0; // 10 2
    scanf("%d %d", &a0, &b0);

    printf("%d %d\n", a0, b0);

    float f = (float) a0 / (float) b0;
    printf("%.3f\n", f);

    int g = gcd(a0, b0);
    printf("%d\n", g);

    int x, y;

    x = a0 / g;
    y = b0 / g;

    printf("%d %d\n", x, y);

    f = (float) x / (float) y;
    printf("%.3f\n", f);

    int a, b;  // 5 10
    scanf("%d %d\n", &a, &b);
    printf("%d %d\n", a, b);

    f = (float) a / (float) b;
    printf("%.3f\n", f);

    g = gcd(a, b);
    printf("%d\n", g);
    
    int z, u;

    z = a / g;
    u = b / g;

    printf("%d %d\n", z, u);

    f = (float) z / (float) u;
    printf("%.3f\n", f);

    int chisl, znam;

    a0 = a0 * b;
    a = a * b0;
    znam = b * b0;
    chisl = a0 + a;

    printf("%d %d\n", a0, znam);
    printf("%d %d\n", a, znam);
    printf("%d %d\n", chisl, znam);

    f = (float) chisl / (float) znam;
    printf("%.3f\n", f);

    g = gcd(chisl, znam);
    printf("%d\n", g);

    chisl /= g;
    znam /= g;

    printf("%d %d\n", chisl, znam);

    f = (float) chisl / (float) znam;
    printf("%.3f\n", f);
    return 0;
}