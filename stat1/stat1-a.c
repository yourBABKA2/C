#include <stdio.h>
#include <math.h>

int main()
{
    #define n 5
    float a[n];
    float b[n];

    int m;
    printf("num: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        printf("a%d: ", i);
        scanf("%f", &a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("b%d: ", i);
        scanf("%f", &b[i]);
    }

    float sa = 0;
    float sb = 0;
    for (int i = 0; i < m; i++)
    {
        sa += a[i];
        sb += b[i];
    }
    float ma = sa / m;
    float mb = sb / m;

    printf("sa: %.3f\n", sa);
    printf("sb: %.3f\n", sb);
    printf("ma: %.3f\n", ma);
    printf("mb: %.3f\n", mb);

    float s1 = 0.0f;
    float s2 = 0.0f;
    for (int i = 0; i < m; i++)
    {
        s1 += powf(a[i] - ma, 2.0f);
        s2 += powf(b[i] - mb, 2.0f);
    }

    float sda = sqrtf(s1 / m);
    float sdb = sqrtf(s2 / m);

    printf("sda: %.3f\n", sda);
    printf("sdb: %.3f\n", sdb);

    return;
}