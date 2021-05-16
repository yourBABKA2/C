#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float lerp(float a, float b, float t) // Linear interpolation
{
    return a + (b - a) * t;
}

int main()
{
    int n;
    float m, y = acosf(-1), r, x0, y0, p, s;

    printf("n: ");
    scanf("%d", &n);

    printf("x0, y0: ");
    scanf("%f %f", &x0, &y0);

    printf("r: ");
    scanf("%f", &r);

    while (true)
    {
        if (fabs(y - s) <= p)
        {
            break;
        }
        else
        {
            float x = lerp(-1.0f, 1.0f, rand() / (float)RAND_MAX);
            float y = lerp(-1.0f, 1.0f, rand() / (float)RAND_MAX);
        }

        if ((x * x) + (y * y) <= 1.0f)
        {
            m += 1;
        }
        float s = 4 * m / n;
        n += 1;
    }


    int z = m;

    float a = 2 * r;
    float ss = a * a;
    float sc = y * pow((a / 2), 2);
    float e = fabs(y - s);

    printf("y:\t%.5f\n", y);
    printf("s:\t%.5f\n", s);
    printf("m:\t%d\n", z);

    printf("a:\t%.3f\n", a);
    printf("ss:\t%.3f\n", ss);
    printf("sc:\t%.3f\n", sc);
    printf("e:\t%.5f\n", e);
}